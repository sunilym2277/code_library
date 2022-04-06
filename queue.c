#include<stdio.h>
#include<stdlib.h>
int a[5];
int f=-1;
int e=0;
int count=0;
int size=5;
void enqueue()
{
    if(f>=4 && count>=5)
    {
        printf("\nQueue Overflow");
        return;
    }
    if(f>=4 && count<5)
    {
        int k;
        printf("\n Hello");
        f=f%(size-1);
        printf("\nEnter the  number:");
        scanf("%d",&a[f]);
        //f++;
        for(int i=0;i<f;i++)
        {
            if(a[i]>a[i+1])
            {
              k=a[i];
              a[i]=a[i+1];
              a[i+1]=k;
            }
        }
    }
    else
    {
        int k;
     f++;
    printf("\nEnter the  number:");
    scanf("%d",&a[f]);
    count++;
    int j=f;
    for(int i=f-1;i>=0;i--)
        {
            printf("\na[%d]=%d",i,a[i]);
            printf("\nf=a[%d]=%d",f,a[j]);
            if(a[j]<a[i])
            {
                printf("\nhi");
              k=a[i];
              a[i]=a[j];
              a[j]=k;
              j--;
            }
        }
    }
}
void dequeue()
{
    if(e>=(size) && count==0)
    {
        printf("\n Queue Under flow");
        e--;
        return;
    }
    if(e>(size-1) && count>0)
    {
        e=e%(size-1);
    }
    count--;
    e++;
}
void disp()
{
    int q;
    printf("\ne=%d",e);
    printf("\nf=%d",f);
    if(f<e)
    {
     for(int i=e;i<size;i++)
     {
         printf("\n%d",a[i]);
     }
     q=0;
     printf("\n ei=%d",e);
     for(int i=q;i<=f;i++)
     {
         printf("\n%d",a[i]);
     }
    }
    else
    {
     for(int i=e;i<=f;i++)
     {
         printf("\n%d",a[i]);
     }
    }
}
main()
{
    int ch;
    do
    {
    printf("\nMENU\n----\n1.enqueue\n2.dequeue\n3.display");
    printf("\nEnter the choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        enqueue();
        break;
    case 2:
        dequeue();
        break;
    case 3:
        disp();
        break;
    default :
        break;
    }
    printf("\n Count=%d",count);
    }while(ch<4);
}
