t=int(input())
for k in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    oc=0
    tc=0
    for i in range(n):
        if (l[i]&1)==1:
            oc+=1
        else:
            if (l[i]%4)==0:
                m=(n-i)
                tc+=m
                tc+=(oc*(oc+1))//2
                tc+=oc*m
                oc=0
            else:
                j=i+1
                while j<n:
                    if (l[j]&1)==0:
                        break
                    j+=1
                m=(n-j)
                tc+=m
                tc+=(oc*(oc+1))//2
                tc+=oc*m
                oc=0
    tc+=((oc*(oc+1))//2)
    print(tc)
