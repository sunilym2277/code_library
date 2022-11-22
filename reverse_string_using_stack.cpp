#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack<char> s;
    string ans="";
    string p="sunil";
    for(int i=0;i<p.length();i++)
    {
        s.push(p[i]);
    }
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    cout<<ans;

    return 0;
}
