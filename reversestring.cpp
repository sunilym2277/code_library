#include <bits/stdc++.h>
using namespace std;


void reverseStr(string& str)
{
    int n = str.length();
  
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main() {
	// your code goes here
	int n;
	int k=0;
	string speed;
	cin>>n;
   cin>>speed;
   string tr=speed;
  reverseStr(tr);
  
  for(int i=0;i<n;i++)
  {
      if(tr[i]!=speed[i])
      {
          k=k+1;
      }
  }
  cout<<k/2<<endl;
  
  
}
