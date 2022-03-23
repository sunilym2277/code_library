#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--)
	{
	    int x,y,d;
	    cin>>x>>y>>d;
	    int z=x-y;
	    if(z<0)
	    {
	        z=y-x;
	    }
	    if(z<=d)
	    {
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
