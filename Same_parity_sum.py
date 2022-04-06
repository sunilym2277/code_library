t=int(input())
for _ in range(t):
    n,k=map(int,input().split())
    if n%2==1:
        if k%2==0:
            print("NO")
        else:
            if k>n:
                print("NO")
            else:
                print("YES")
                for i in range(k-1):
                    print(1,sep=" ",end=" ")
                print(n-k+1,sep=" ")
    else:
        if k>n:
            print("NO")
        else:
            if k%2==0:
                print("YES")
                for i in range(k-1):
                    print(1,sep=" ",end=" ")
                print(n-k+1,sep=" ")
            else:
                d=n//2
                if d<k:
                    print("NO")
                else:
                    print("YES")
                    for i in range(k-1):
                        print(2,sep=" ",end=" ")
                    print(n-(2*k)+2,sep=" ")
