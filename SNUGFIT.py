n=int(input())
for i in range(n):
    nr=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    a.sort()
    b.sort()
    l=[]
    s=0
    k=0
    for j in range(nr):
        if k<nr:
            #print(b)
            ls=[a[j],b[0]]
            s+=min(ls)
            b.pop(k)
            
    print(s)
