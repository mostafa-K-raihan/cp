t = int(input())

x = 'cba'
while t > 0:
    t -= 1
    n, k = map(int, input().split())
    base = 'a' * k
    rem = (n - k) // 3
    need = (n - k) % 3
    
    rest = x * rem + (x[: need])
    print (base + rest)
