#include <stdio.h>
#include <stdlib.h>
int a[10];
struct stack
{
    int st[10];
    int top;
}st1,st2;
void push(int e,struct stack *s)
{
    (s->top)=(s->top)+1;
    s->st[s->top]=e;
}
int pop(struct stack *s)
{
    int e;
    e=s->st[s->top];
    (s->top)=(s->top)-1;
    return e;
}

 int main()
{
    int i,e;
 st1.top=-1;
 st2.top=-1;
 printf("enter array:");
 for(i=0;i<5;i++)
 scanf("%d",&a[i]);

for(i=0;i<5;i++)
{
    if(st1.top==-1)
    {
        push(a[i],&st1);
    }
    else
    {
        while(st1.top>=0)
        {
            if(a[i]<st1.st[st1.top])
            {
                e=pop(&st1);
                push(e,&st2);
                if(st1.top==-1)
                {
                    push(a[i],&st1);
                    break;

                }
            }
            else
            {
                push(a[i],&st1);
                break;
            }
        }
        while(st2.top>=0)
        {
            e=pop(&st2);
            push(e,&st1);
        }

    }
}
for(i=0;i<=st1.top;i++)
printf("%d\t",st1.st[i]);

return 0;
}
