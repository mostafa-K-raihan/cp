for _ in range(int(input())):
  n = int(input())
  l = list(map(int, input().split()))

  s = sum(l)
  
  for i in range(n, 0, -1):
    if (s % i == 0):
      innerSum = 0
      goal = s // i
      flag = True
      
      for j in range(n):
        innerSum += l[j]

        if (innerSum > goal):
          flag = False
          break
        elif (innerSum == goal):
          innerSum = 0
      
      if flag:
        print(n - i)
        break