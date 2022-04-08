
for _ in range(int(input())):
    row,col=map(int,input().split())
    ed=row*(col-1)+col*(row-1)
    open=row*col

    if ed>open:
        print("NO")
    else:
        print("YES")
