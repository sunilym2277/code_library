#include<bits/stdc++.h>
using namespace std;

void rod_cutting(int n)
{
    int res[n+1];
    memset(res, 0, sizeof(res));
//    cout
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=n/2;j++)
        {
            res[i]=max(res[i],max(j*(i-j),j*res[i-j]));
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<endl;
    }
}

int main()
{

    int n;
    cin>>n;
    rod_cutting(n);
}
