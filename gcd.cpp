#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define pp long long int

pp gcd(pp a,pp b)
{
    if(a==0)
    return b;
    
    if(b==0)
    return a;
    
    if(a==b)
    return a;
    
    if(a>b)
    return gcd(a-b,b);
    else return gcd(a,b-a);
}

int main() {
	// your code goes here
	pp z;
	cin>>z;
	while(z--)
	{
	    pp a,b,m,sum=99999999,w,e,flag=0;
	    cin>>a>>b;
	    for(pp i=a;i<b;i++)
	    {
	        for(pp j=i+1;j<=b;j++)
	        {
	            m=gcd(i,j);
	            if(m>1 && i+j<sum)
	            {
	                    sum=i+j;
	                    w=i;
	                    e=j;
	                    flag=1;
	                    i=b;
	                    break;
	                
	            }
	        }
	    }
	    if(flag==1)
	    {
	        cout<<w<<" "<<e<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	    
	}
	return 0;
}
