import sys
import subprocess
import configparser
import os
import shutil
import csv
import logging
import argparse
import re
import json

CORPUS_DIR = './output/'
EXPERIMENT_DATA_STORE = './experiment-data'
power_schedules = ['fast', 'coe', 'explore', 'quad', 'lin', 'exploit']

def read_env(config):
  return dict(config['env'])

def run_command(args: str, stdin=subprocess.PIPE, env=os.environ, shell=False):
  res = subprocess.run(args, shell=shell, stdin=stdin, env=env, capture_output=True)
  return res.returncode, res.stdout, res.stderr

def parse_log(out_str):
  data_by_cycle = []
  curr_cycle = -1
  curr_seed = None

  for line in out_str.split('\n'):
    if 'Entering queue cycle' in line:
      match = re.search(r'Entering queue cycle (\d+)', line)
      curr_cycle = int(match.group(1))
      selected_seeds = []
      data_by_cycle.append({'cycle_num': curr_cycle, 'selected_seeds': selected_seeds})
    elif 'Fuzzing test case #' in line:
      match = re.search(r'Fuzzing test case #(\d+)', line)
      curr_seed = {'id': int(match.group(1)), 'children': []}
      selected_seeds.append(curr_seed)

      match = re.search(r'perf_score=(\d+)', line)
      curr_seed['perf_score'] = int(match.group(1))
    elif 'Adding test case to queue' in line:
      match = re.search(r'id=(\d+)', line)
      curr_seed['children'].append(int(match.group(1)))

  return data_by_cycle

      
def fuzz_target(selected_schedules, instrument=False):
  logging.basicConfig(level=logging.DEBUG)

  runs = 10

  envs = os.environ.copy()

  if os.path.exists(EXPERIMENT_DATA_STORE):
    shutil.rmtree(EXPERIMENT_DATA_STORE)
  os.mkdir(EXPERIMENT_DATA_STORE)
  
  if os.path.exists(CORPUS_DIR):
    shutil.rmtree(CORPUS_DIR)
  os.mkdir(CORPUS_DIR)

  for p in selected_schedules:
    logging.info(f'fuzzing with power schedule {p}')

    power_data_store = os.path.join(EXPERIMENT_DATA_STORE, p)
    os.mkdir(power_data_store)
    raw_data_store = os.path.join(power_data_store, 'raw_data')
    os.mkdir(raw_data_store)
    
    log_interval = runs / 10
    for i in range(runs):
      if i % log_interval == 0:
        logging.info(f'finished {i}/{runs} fuzzing runs')
        corpus = f'{CORPUS_DIR}{p}{i}'
        args = ['/AFLplusplus/afl-fuzz', 
        '-p', p,
        '-i', '../seeds', '-o', corpus, 
        '-m', 'none',
        '--', './deep', '@@']
      _, out, _ = run_command(args, env=envs)
    
      execs = extract_execs(corpus)
      run_data = {'run_id': i, 'execs': execs}

      if instrument:
        data_by_cycle = parse_log(out.decode('utf-8', errors='ignore'))
        run_data['cycle'] = data_by_cycle

      run_store = os.path.join(raw_data_store, str(i))
      shutil.copytree(corpus, run_store)

      with open(os.path.join(run_store, 'run_data.json'), 'w+') as f:
        json.dump(run_data, f, indent=2)

    combine_json(raw_data_store, power_data_store, runs)
    

def combine_json(raw_data_store, power_data_store, runs):
  combined_run_data = []
  for i in range(runs):
    run_store = os.path.join(raw_data_store, str(i))
    
    if os.path.exists(os.path.join(run_store, 'run_data.json')):
      with open(os.path.join(run_store, 'run_data.json'), 'r') as f:
        run_data = json.load(f)
      combined_run_data.append(run_data)
  with open(os.path.join(power_data_store, 'combined_run_data.json'), 'w+') as f:
    json.dump(combined_run_data, f, indent=2)
    
    
def extract_execs(corpus) -> int:
  stats_path = os.path.join(corpus, 'default/fuzzer_stats')
  if os.path.exists(stats_path):
    with open(stats_path, 'r') as f:
      lines = f.readlines()
    return int(lines[11].replace(' ', '').split(':')[1])
  else:
    logging.warning(f'fuzzer_stats not found for {corpus}')
    return 0

def parse_args():  
  parser = argparse.ArgumentParser(description='evenBranch and progressiveBranch experiment runner')
  parser.add_argument('-p',
      '--power-schedule',
      help=('Power schedule'
          'All power schedules by default'),
      nargs='+',
      required=False,
      default=power_schedules,
      choices=power_schedules)
  parser.add_argument('-i',
      '--instrument',
      help='Turn on fuzzer internal parameter instrumentation',
      action='store_true',
      required=False)
  return parser.parse_args()

def main():
  args = parse_args()
  fuzz_target(args.power_schedule, args.instrument)

if __name__ == '__main__':
  sys.exit(main())
