#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here stack
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            s.push(i);
        }
        while(s.size()>1){
            int a=s.top();
            s.pop();
            int b = s.top();
            s.pop();
            if(M[a][b]==1)
              s.push(b);
              
             else 
               s.push(a);
        }
        int c=s.top();
       // cout<<c<<endl;
        
        int rc=0;
        int cc=0;
        for(int i=0;i<n;i++){
            if(M[c][i]==0)
               rc++;
               
            if(M[i][c]==1)
               cc++;
               
//cout<<rc<<" "<<cc<<endl;
        }
        
        
 
        
        if(rc!=n)
          return -1;
          
          
        if(cc!= n-1){
            return -1;
        }
        
        
        return  c;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
