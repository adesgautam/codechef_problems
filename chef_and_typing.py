
l, r = ['d','f'], ['j','k']

t = int(input())
for _ in range(t):
	tot, flg = 0, 0
	n = int(input())
	wrd = {}

	for _ in range(n):
		ls = 0
		inp = input()
		w = list(inp)

		if inp in wrd:
			tot += wrd[inp]//2
		else:
			ls+=2
			flg = 0 if w[0] in l else 1

			for i in w[1:]:
				if i in l:
					ls += 4 if flg == 0 else 2
					flg = 0

				elif i in r: 
					ls += 2 if flg == 0 else 4
					flg = 1
					
			wrd[inp] = ls
			tot += ls

	print(tot)
