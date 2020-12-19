for _ in range(int(input())):
	a, b, c = map(int, input().split())
	sum = a + b + c
	total_enhanced_shots = sum // 9
	remaining_shots = sum % 9

	if (remaining_shots == 0 and min(a, b, c) >= total_enhanced_shots):
		print('YES')
	else:
		print('NO')

