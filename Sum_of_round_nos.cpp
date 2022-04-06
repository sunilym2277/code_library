#include <iostream>
 
using namespace std;
 
int main()
{
    int t,n,N,d,s=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        N=n;
        int p=1;
        int c=0;
        while(n>0)
        {
            d=n%10;
            if(d==0);
        
            else{
            c++;
            d=d*p;
            //cout<<d<<" ";
            }
            n=n/10;
            p*=10;
        }
        cout<<c<<'\n';
        n=N;
        p=1;
        while(n>0)
        {
            d=n%10;
            if(d==0);
        
            else{
           // c++;
            d=d*p;
            cout<<d<<" ";
            }
            n=n/10;
            p*=10;
        }
        cout<<'\n';
    }
 
    return 0;
}
