#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char t[1000];
    int c;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    scanf("%s",t);
    for(int j=48;j<=57;j++)
    {
        c=0;
        for(int i=0;i<strlen(t);i++)
    {
       // 
        if(t[i]==j)
        {
            c++;
            //printf("-%c-%d-=",t[i],j);
        }
    }  
    printf("%d ",c);
    //c=0;
    }
    return 0;
}
