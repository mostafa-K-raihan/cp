for _ in range(int(input())):
  n = int(input())
  s1 = input()
  s2 = input()
  r, b = 0, 0
  for i in range(n):
    if (int(s1[i]) > int(s2[i])):
      r += 1
    elif (int(s1[i]) < int(s2[i])):
      b += 1
  if (r == b):
    print('EQUAL')
  elif (r < b):
    print('BLUE')
  else:
    print('RED')
