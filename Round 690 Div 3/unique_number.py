a = [1, 2, 3, 4, 5, 6, 7, 8, 9]

sums = []

for subLen in range(2, 9):
    for i in range(9 - subLen):
        sub = a[i: i+subLen-1]
        for k in range(subLen-1, 9):
            copy = [x for x in sub]
            copy.append(a[k])
            sums.append((sum(copy), copy))
            

for _ in range(int(input())):
    n = int(input())

    if (n <= 9):
        print(n)

    else:
        found = False
        for i in range(len(sums)):
            item = sums[i]
            if (item[0] == n):
              l = item[1]
              print(''.join(map(str,l)))
              found = True
              break

        if (not found):
            print(-1)
