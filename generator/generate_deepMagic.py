import math

def generate_if(f, i, depth, interval, left=True):
  magic_num = int((interval[0] + interval[1]) / 2)

  f.write(f'{" " * i * 4}if (hash[{i}] == {magic_num}) {{\n')
  if i == 4:
    f.write(f'{" " * (i+1) * 4}printf("this is branch {i + 1}\\n");\n')
  else:
    f.write(f'{" " * (i+1) * 4}printf("this is branch {i + 1}\\n");\n')
    generate_if(f, i+1, depth, (interval[0], 1 << depth))
  f.write(f'{" " * i * 4}}}\n')

if __name__ == '__main__':
  with open('generated_deepMagic.c', 'w+') as f:
    depth = 20
    generate_if(f, 0, depth, (0, 1 << depth))
