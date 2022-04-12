T=int(input())
for _ in range(0,T):
	N,C=map(int,input().split())
	A=list(map(int,input().split()))
	if sum(A)<=C:
		print("Yes")
	else:
		print("No")
