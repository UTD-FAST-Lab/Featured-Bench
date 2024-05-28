def generate_if(f, i, depth, interval, left=True):
  magic_num = int((interval[0] + interval[1]) / 2)

  f.write(f'{" " * i * 4}if (hash < {magic_num}) {{\n')
  if i == depth - 1:
    f.write(f'{" " * (i+1) * 4}printf("this is branch {magic_num-1}\\n");\n')
  else:
    generate_if(f, i+1, depth, (interval[0], magic_num))
  f.write(f'{" " * i * 4}}} else {{\n')
  if i == depth - 1:
    f.write(f'{" " * (i+1) * 4}printf("this is branch {magic_num}\\n");\n')
  else:
    generate_if(f, i+1, depth, (magic_num+1, interval[1]), False)
  f.write(f'{" " * i * 4}}}\n')

if __name__ == '__main__':
  with open('generated_even.c', 'w+') as f:
    depth = 10
    generate_if(f, 0, depth, (0, 1 << depth))
