for _ in range(int(input())):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    index = -1
    for i in range(n-1, -1, -1):
        if(a[i] != i+1):
            index = i+1
            break
    
    failure = 1.0
    for __ in range(m):
        r, p = map(float, input().split())
        if (r >= index):
            failure *= (1 - p)

    if(index == -1):
        print(1)
    else:
        print(1 - failure)
