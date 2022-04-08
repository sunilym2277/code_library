n=int(input())
s=input().split()
s=list(map(int,s))
count=[]
for i in range(n):
    c=1
    for j in range(i+1,n):
        if s[j]>s[j-1]:
            c+=1
        else:
            break
    count.append(c)

print(max(count))
