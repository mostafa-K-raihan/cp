def dp(target, nums, cache):
    if (target < 0):
        return False
    elif (target == 0):
        return True
    if target in cache:
        return False

    cache.add(target)

    for idx, num in enumerate(nums):
        possible = dp(target - num, nums[idx+1: ], cache) or dp(target, nums[idx+1: ], cache)
        if possible:
            return True
    return False


for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))

    s = sum(a)
    if (s % 2 == 1):
        print ('NO')
        continue
    
    possible = dp(s // 2, a, set())
    print ('YES' if possible else 'NO')
