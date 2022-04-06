def countingValleys(n, s):
    s=list(s)
    val=0
    c=0
    f=0
    for i in s:
       #print("i",i)
        if i=='U':
            val+=1
        if i=='D':
            val-=1
       # print("val:",val)
        if val==-1:
            f=1
        if f==1 and val==0:
            c+=1
    
    return c


countingValleys(4,"UDDDUDUU")
