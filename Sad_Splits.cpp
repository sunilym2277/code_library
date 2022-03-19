#include<bits/stdc++.h>
using namespace std;


int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) 
    {
        int i=0, j, n;
  string s;
  cin>>s;
  int c1=0, c2=0;
  while(s[i])
  { 
    if((s[i]-'0')%2==0) c1++;
    else c2++;
    i++;
  }

  
  if(((s[s.size()-1])-'0')&1)
  {
      if(c2>=2)
     cout << "YES\n";
      else cout << "NO\n";
  }
  else{
    if(c1>=2)
    cout << "YES\n";
    else
    cout << "NO\n";
  }
    }

    return 0;
}
