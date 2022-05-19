// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int a[], int n) {
        sort(a,a+n);
        int f=1;
        vector <int> z;
        for(int i=0;i<n;i++)
        {
            if(a[i]==a[i+1])
            {
                int j=i;
                while(a[j]==a[j+1])
                {
                    j++;
                }
                i=j;
                z.push_back(a[i]);
                f=0;
            }
        }
        if(f==1)
        {
            z.push_back(-1);
        }
        
        return z;

    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
