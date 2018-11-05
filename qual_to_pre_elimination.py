
t = int(input())
while t:

	n, k = input().split(' ')
	n, k = int(n), int(k)

	scores = input().split(' ')
	scores = [int(i) for i in scores]
	scores_ = sorted(scores, reverse=True)
	score = scores_[k-1]
	c = len(scores[:k])

	for i in range(k, len(scores_)):
		if scores_[i]==score:
			c+=1
		else:
			break

	print(c)


	t-=1