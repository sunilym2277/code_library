#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	long int test,max=0;
	cin>>test;
	while(test--)
	{
	    long long int n;
	    cin>>n;
	    if(n%2==0)
	    {
	        cout<<n/2<<endl;
	    }
	    else{
	        cout<<(n/2)-n<<endl;
	    }
	}
	
	return 0;
}
