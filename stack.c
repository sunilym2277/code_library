#include<stdio.h>
#include<stdlib.h>
int a[5];
int top=-1;
void push()
{
    if(top>=4)
    {
        printf("\nStack overflow");
        return;
    }
    top++;
    printf("Enter the number:");
    scanf("%d",&a[top]);
}
void pop()
{
    if(top<0)
    {
        printf("\nStack Underflow");
        return;
    }
    top--;
}
void disp()
{
    for (int i=0;i<=top;i++)
    {
        printf("\n%d",a[i]);
    }
}
main()
{
    int ch;
    do
    {
    printf("\nMENU\n----\n1.push\n2.pop\n3.display");
    printf("\nEnter the choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        disp();
        break;
    default :
        break;
    }
    }while(ch<4);
}
