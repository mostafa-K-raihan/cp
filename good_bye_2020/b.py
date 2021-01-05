for _ in range(int(input())):
    n = int(input())
    a = sorted(list(map(int, input().split())))
    have_i_seen = -1
    sett = set()
    for i in range(len(a)):

        if ( a[i] > have_i_seen ):
            have_i_seen = a[i]
            sett.add(a[i])
        else:
            a[i] +=  1
            have_i_seen = a[i]
            sett.add(a[i])
        
    print(len(sett))
    
        

