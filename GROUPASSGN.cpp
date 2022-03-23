#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--)
	{
	    long long int n,x;
	    cin>>n>>x;
	    n=2*n;
	    n=n-x;
	    n=n+1;
	    cout<<n<<endl;
	}
	return 0;
}
