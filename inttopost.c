#include <stdio.h>
#include <stdlib.h>
#define size 50
#include <ctype.h>
#include <string.h>
struct stack
{
    char s[size];
    int top;
}st;
push(char ele)
{
    st.top++;
    st.s[st.top]=ele;

}
char pop()
{
    return(st.s[st.top--]);
}
int pr(char ele)
{
    switch(ele)
    {
        case '#':return 0;
        case '(':return 1;
        case '+':
        case '-':return 2;
        case '*':
        case '/':return 3;
    }
}
int main()
{
    char temp[50],infx[50],pofx[50],ch,ele;
    int i=0,k=0;
    st.top=-1;
    printf("\n\nread infix expn:");
    scanf("%s",infx);
    strrev(infx);
    printf("%s\n",infx);
    i=0;
    ch=infx[0];
    while(ch!='\0')
    {
        ch=infx[i];
        if(ch=='(')
           infx[i]=')';
           else if(ch==')')
           infx[i]='(';
           i++;
    }
    i=0;
    printf("%s\n",infx);
push('#');
while((ch=infx[i++])!='\0')
{
    if(ch=='(')
    push(ch);
    else
    if(isalnum(ch))
    pofx[k++]=ch;
    else
    if(ch==')')
    {

        while(st.s[st.top]!='(')
              pofx[k++]=pop();
              ele=pop();
    }
    else
    {
        //operator
        while(pr(st.s[st.top])>=pr(ch))
        pofx[k++]=pop();
        push(ch);

    }
}
while(st.s[st.top]!='#')
pofx[k++]=pop();
pofx[k]='\0';
printf("\ngiven infix:%s   Postfix:%s\n",infx,strrev(pofx));



    return 0;
}
