#include <iostream>
using namespace std;

int Merge(int arr[], int aux[], int low, int mid, int high)
{
    int k = low, i = low, j = mid + 1;
    int inversionCount = 0;
   
    while (i <= mid && j <= high) 
    {
        if (arr[i] <= arr[j]) {
            aux[k++] = arr[i++];
        }
        else {
            aux[k++] = arr[j++];
            inversionCount += (mid - i + 1);    
        }
    }

  
    while (i <= mid)
        aux[k++] = arr[i++];

    for (int i = low; i <= high; i++)
        arr[i] = aux[i];
        
    return inversionCount;
}


int MergeSort(int arr[], int aux[], int low, int high)
{
   
    if (high == low)    // if run size == 1
        return 0;

    int mid = (low + ((high - low) >> 1));
    int inversionCount = 0;
  


    inversionCount += MergeSort(arr, aux, low, mid);

  
    inversionCount += MergeSort(arr, aux, mid + 1, high);

   
    inversionCount += Merge(arr, aux, low, mid, high);

    return inversionCount;
}
  
int main() 
{ 
    int n,sc,cnt,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cnt=0;
        cin>>sc;
        int a[sc],b[sc];
        for(j=0;j<sc;j++)
        {cin>>a[j];b[j]=a[j];}
        cnt=MergeSort(a,b,0,sc-1); 
        if(cnt>=sc)
            cout<<cnt<<'\n'<<"YES\n";
        else
            cout<<cnt<<'\n'<<"NO\n";
        
    }
    return 0; 
} 
