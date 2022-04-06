n=int(input())
l=[0]*(n+1)
l[0]=1
for i in range(3,n+1):
    l[i]=l[i]+l[i-3]
for i in range(5,n+1):
    l[i]=l[i]+l[i-5]
for i in range(10,n+1):
    l[i]=l[i]+l[i-10]

print(l[n])  
