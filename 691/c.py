import math

n, m = map(int, input().split())
l = list(map(int, input().split()))
g = 0
for x in l:
  g = math.gcd(g, x - l[0])

ll = map(int, input().split())
for x in ll:
  print(math.gcd(g, l[0] + x), end=' ')
print('')

