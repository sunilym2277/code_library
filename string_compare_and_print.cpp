#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--)
	{
	    string a,b;
	    cin>>a>>b;
	    for(int i=0;i<5;i++)
	    {
	        if(a[i]==b[i])
	        {
	            cout<<"G";
	        }
	        else{
	            cout<<"B";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
