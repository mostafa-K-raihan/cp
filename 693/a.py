for _ in range(int(input())):
    w, h, n = map(int, input().split())
    cnt = 1
    while(w % 2 == 0):
        w = w // 2
        cnt *= 2
    while(h % 2 == 0):
        h = h // 2
        cnt *= 2
    print('YES' if cnt >= n else 'NO')
