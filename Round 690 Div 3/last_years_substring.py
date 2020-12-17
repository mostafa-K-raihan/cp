for _ in range(int(input())):
    n = int(input())
    a = input()

    first = a.startswith('2') and a.endswith('020')
    second = a.startswith('20') and a.endswith('20')
    third = a.startswith('202') and a.endswith('0')
    fourth = a.startswith('2020') or a.endswith('2020')

    if (first or second or third or fourth):
        print('YES')
    else:
        print('NO')

