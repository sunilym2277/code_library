#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,a,b,total=0;
	    cin>>x>>y;
	    a=x/3;
	    b=x%3;
	    total=total+a*y*2;
	    total=total+y*b;
	    cout<<total<<endl;
	    
	}
	return 0;
}
