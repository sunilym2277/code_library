#include <bits/stdc++.h>
using namespace std;

int main() {
	long int test;
	cin>>test;
	while(test--)
	{
	    long long int n,a=0,b=0;
	    string st;
	    cin>>n;
	    cin>>st;
	    for(long int i=0;i<n;i++)
	    {
	        if(st[i]=='1'){ a++;}
	        else{
	            b++;
	        }
	    }  
	    if(b>a){
	        cout<<2*a+1<<endl;
	    }
	    else if(a>b)
	    {
	        cout<<2*b+1<<endl;
	    }
	    else{
	        cout<<2*a<<endl;
	    }
	    
	      


	    }
	return 0;
}
