
t = int(input())
for _ in range(t):
	n = input().split(' ')
	k = int(n[1])
	n = int(n[0])

	nums = input().split(' ')
	nums = [int(i) for i in nums]
	nums.insert(0,0)

	steps = 0
	for i in range(len(nums)-1):
		d = (nums[i+1]-nums[i])
		if d%k==0:
			steps += (d//k)-1
		elif d>k:
			steps += d//k

	print(steps)

