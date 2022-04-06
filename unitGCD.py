for _ in range(int(input())):
    N=int(input())

    if N==3 or N==1:
        print(1)
        print(N,end=" ")
        for i in range(1,N+1):
            print(i,end=" ")
        print()
        continue

    print(N//2)
    if N%2==0:
        for i in range(1,N,2):
            print("2",end=" ")
            print(f'{i} {i+1}')
    else:
        i=1
        while i<=N-3-1:
            print("2",end=" ")
            print(f'{i} {i+1}')
            i+=2

        print("3",end=" ")
        while i<=N:
            print(i,end=" ")
            i+=1
        print()
