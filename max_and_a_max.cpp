#include <iostream>

using namespace std;
#define l long long int 

l kadaneAlgo(l *arr,l n){

    l sum=0,start=0,end=0,s=0;

    l max=-1111111;

    for(l i=0;i<n;i++)
    {

        sum+=arr[i];

        if(sum>max){

            max=sum;
            start=s;
            end=i;

        }

        if(sum<0){

            sum=0;
            s=i+1;

        }





    }
    
    for(l k=start; k<=end; k++)
    {
        arr[k]=-11111;
    }

    return max;

}



int main() {

        l n;

        cin>>n;

        l * arr=new l[n];

        for(l i=0;i<n;i++){

            cin>>arr[i];

        }



        l ans=kadaneAlgo(arr,n);
     l ans1=kadaneAlgo(arr,n);

        cout<<ans<<endl<<ans1<<endl;



    

    return 0;

}
