#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void push(char a,char s[10],int *top)
{
   (*top)++;
   s[*top]=a;
}
void pop(char s[10],int *top)
{
    char a;
    a=s[*top];
    printf("%c",a);
    (*top)--;
}
int main()
{
    int i;
    char a[10],s[10];
    int top=-1;
    printf("Enter string:");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        push(a[i],s,&top);
    }
    for(i=top;i>=0;i--)
    {
        pop(s,&top);
    }
    return 0;
}
