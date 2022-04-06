#include<stdio.h>
tower(int n,char from,char to,char aux)
{
    if(n==1)
    {
        printf("\n Move the disk1 from %c to %c",from,to);
        return;
    }
    tower(n-1,from,aux,to);
    printf("\nMove disk%d from %c to %c",n,from,to);
    tower(n-1,aux,to,from);
}
main()
{
    int n;
    for(int i=0;i<5;i++)
    {
    printf("\nEnter the number of disk");
    scanf("%d",&n);
    tower(n,'A','C','B');
    }
}
