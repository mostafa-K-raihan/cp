for _ in range(int(input())):
    n = int(input())
    if (n > 45):
        print(-1)
        continue
    start = 9

    res = ''
    while(n > start):
        res = str(start) + res
        n -= start
        start -= 1
    if (n > 0):
        res = str(n) + res

    print(res)