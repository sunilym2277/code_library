#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    //printf("%d\n%d\n%d",(n&k),(n||k),(n^k));
    int a=0,o=0,x=0;
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
           if(a<(i&j) && (i&j)<k)
           {
               a=(i&j);
           } 
           
           
           if(o<(i|j) && (i|j)<k)
           {
               o=(i|j);
           }
           
           
           if(x<(i^j) && (i^j)<k)
           {
               x=(i^j);
           }
           
        }
    }
    
    printf("%d\n%d\n%d",a,o,x);
  //Write your code here.
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
