void sort012(int *arr, int n)
{
   //   Write your code here
    int a1=0,b1=0,c1=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            a1++;
        }
        else if(arr[i]==1)
        {
            b1++;
        }
        else if(arr[i]==2)
        {
            c1++;
        }
        
        
    }
    
        for(int i=0;i<a1;i++)
            arr[i]=0;
    
     for(int i=a1;i<a1+b1;i++)
            arr[i]=1;
    
     for(int i=a1+b1;i<n;i++)
            arr[i]=2;
    
    
}
