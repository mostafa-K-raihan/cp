n = int(input())
if (n%2 == 0):
  m = n // 2
  print( (m+1) ** 2)
else:
  m = n+1
  res = 0
  flag = True
  for i in range(m, -1, -2):
    j = i**2
    if (not flag):
      j *= -1
    res += j
    flag = not flag

  print(res)