for _ in range(int(input())):
    n = int(input())
    a = list(input().split())

    pivot = n // 2

    i = 0
    j = n-1

    p = []

    while(i < pivot):

        p.append(a[i])
        p.append(a[j])
        i += 1
        j -= 1

    
    if (n % 2 == 1):
        p.append(a[pivot])
        
    print(' '.join(p))
