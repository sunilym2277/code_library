def root(a,i):
	while(a[i]!=i):
		i=a[i]
	return i
def find(a,u,v):
	if root(a,u) == root(a,v):
		return 1
	else:
		return 0
def weightedUnion(a,size,u,v):
	rootu=root(a,u)
	rootv=root(a,v)
	if size[rootu]<size[rootv]:
		a[rootu]=a[rootv]
		size[rootv]+=size[rootu]
	else:
		a[rootv]=a[rootu]
		size[rootu]+=size[rootv]
a=list(map(int,input().split()))
size=[1]*len(a)
print(size)
weightedUnion(a,size,0,1)
weightedUnion(a,size,3,4)
weightedUnion(a,size,5,6)
print(a)
print(size)
