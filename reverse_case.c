#include<stdio.h>

int main()
{
    char ch;

    //Upper to Lower Case
    printf("Enter a Character (A-Z)\n");
    scanf("%c",&ch);
    ch=ch|32;
    printf("Lower Cased : %c\n",ch);

    //Lower to Upper Case
    printf("Enter a Character (a-z)\n");
    getchar();
    scanf("%c",&ch);
    ch=ch&(~32);
    printf("Upper Cased : %c\n",ch);
    return 0;
}
