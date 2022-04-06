def sub_lists(list1): 
	sublist = []
	for i in range(len(list1) + 1): 
		for j in range(i + 1, len(list1) + 1): 
			sub = list1[i:j]
			if((len(sub)!=0) and len(sub)!=len(list1)):
				sublist.append(sum(sub)) 
	return sublist 
T=int(input())
for _ in range(0,T):
	A=list(map(int,input().split()))
	N=A[0]
	M=A[1]
	A=list(map(int,input().split()))
	val=sub_lists(A)
	flag=0
	count=0
	for i in range(0,len(val)):
		if val[i]%M==0:
			count+=1
	print(count)
