import math

def generate_if(f, i, depth, interval, left=True):
  magic_num = int((interval[0] + interval[1]) / 2)

  f.write(f'if (hash == {2 ** (depth - int(math.log2(magic_num)) - 1)}) {{\n')
  if i == depth - 1:
    f.write(f'printf("this is branch {depth - int(math.log2(magic_num))}\\n");\n')
    f.write(f'}}\n')
  else:
    f.write(f'printf("this is branch {depth - int(math.log2(magic_num))}\\n");\n')
    f.write(f'}}\n')
    generate_if(f, i+1, depth, (interval[0], magic_num))

if __name__ == '__main__':
  with open('generated_magic.c', 'w+') as f:
    depth = 5
    generate_if(f, 0, depth, (0, 1 << depth))
