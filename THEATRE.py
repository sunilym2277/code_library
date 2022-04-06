import itertools
q=int(input())
prof=[]
for i in range(q):
    n=int(input())
    
    if n==0:
        print(-400)
        prof.append(-400)
    else:
        lst=[[0 for col in range(4)] for row in range(4)]
        for j in range(n):
            l=input().split()
            if 'A' in l:
                lst[0][int(int(l[1])/3)-1]+=1
            elif 'B' in l:
                lst[1][int(int(l[1])/3)-1]+=1
            elif 'C' in l:
                lst[2][int(int(l[1])/3)-1]+=1
            elif 'D' in l:
                lst[3][int(int(l[1])/3)-1]+=1
                
        c=list(itertools.permutations([0,1,2,3]))
        mx=0
        for k in range(len(c)):
            s=0
            pric=100
            c[k]=list(c[k])
            for x in range(len(c[k])):
                c[k][x]=lst[x][(c[k][x])]
            c[k].sort(reverse=True)
            for x in c[k]:
                if x>0:
                    s+=(x*pric)
                    pric-=25
                elif x==0:
                    s-=100
                
            if k==0:
                mx=s
            if s>mx:
                mx=s
        print(mx)
        prof.append(mx)
        
print(sum(prof))
