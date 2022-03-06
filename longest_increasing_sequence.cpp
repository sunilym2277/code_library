
#include<bits/stdc++.h>
using namespace std;


void LIS(int a[],int n)
{
    int lis[n];
    for(int i=0;i<n;i++)
    {
        lis[i]=1;
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j] && lis[i]<lis[j]+1)
            {
                lis[i]=lis[j]+1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<lis[i]<<endl;
    }

}

int main()
{

    int n=5;
    //cin>>n;
    int a[n]={5,11,3,15,30,25};
    /*for(int i=0;i<n;i++)
    {
                cin>>a[i];
    }*/
    LIS(a,n);
}


int lis(int arr[], int n)
{
    int lis[n];

    lis[0] = 1;

    /* Compute optimized LIS values in
       bottom up manner */
    for (int i = 1; i < n; i++) {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }

    // Return maximum value in lis[]
    return *max_element(lis, lis + n);
}
