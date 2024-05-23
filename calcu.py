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
import glob
import numpy as np


def generate_csv(args):
    
    results = glob.glob(os.path.join(args.results, '**', 'combined_run_data.json'), recursive=True)
    contents = []
    headers = []
    
    for res in results:
        with open(res, 'r') as file:
            data = json.load(file)
            print(res.split('/')[-2])
            col = []
            
            for item in data:
                execs = item['execs']
                col.append(execs)
            
            contents.append(col)
            headers.append(res.split('/')[-2])
            
    np_arr = np.array(contents)
    np_arr = np_arr.T
    print(np_arr)
     
    with open(f'agrregate.csv', 'w', encoding='UTF8') as f:
        writer = csv.writer(f)
        writer.writerow(headers)
        writer.writerows(np_arr)
    

def parse_args():  
  parser = argparse.ArgumentParser(description='enter result path')
  parser.add_argument('-r',
      '--results',
      help=('The path saves the results'))
  return parser.parse_args()

def main():
  args = parse_args()
  generate_csv(args)

if __name__ == '__main__':
  sys.exit(main())