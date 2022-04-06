T=int(input())
for _ in range(0,T):
	N=int(input())
	A=list(map(int,input().split()))
	val = sum(A)-N*min(A)
	print(val)
