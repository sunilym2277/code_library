/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <bits/stdc++.h>

using namespace std;


int main()
{

        int n,count=0;
        vector<int> a,b;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            b.push_back(x);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int j=n-1;

        for(int i=0;i<n;i++)
        {
            int z=a[i]-b[j];
            if(z>0)
            {
                count+=z;
            }
            j--;
        }
        cout<<count<<endl;
    

}
