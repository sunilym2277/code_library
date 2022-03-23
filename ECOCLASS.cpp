#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--)
	{
	    int n,c=0;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	        if(a[i]==b[i])
	        {
	            c=c+1;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
