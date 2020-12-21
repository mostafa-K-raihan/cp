
for _ in range(int(input())):
  n = int(input())

  while(any(i != 0 and n % i != 0 for i in map(int, str(n)))):
    n += 1
  
  print(n)