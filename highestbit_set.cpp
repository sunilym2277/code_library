#include <iostream>
using namespace std;

int setBitNumber(int n)
{
    if (n == 0)
        return 0;
 
    int msb = 0;
    n = n / 2;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
 
    return (1 << msb);
}

int main() {
	// your code goes here
	long long int test,pp=1,max=0,s=0;
	cin>>test;
	long long int a[test];
	while(test--)
	{
	    cin>>a[pp];
	    if(max<a[pp])
	    {
	        max=a[pp];
	    }
	    pp++;
	}
	long long int dp[max+1];
	for(long long int i=2;i<=max;i++)
	{
	    if(setBitNumber(i)==setBitNumber(i-1))
	    {
	        s++;
	    }
	    dp[i]=s;
	}
	
	for(long long int i=1;i<pp;i++)
	{
	    cout<<dp[a[i]]<<endl;
	}
	
	return 0;
}
