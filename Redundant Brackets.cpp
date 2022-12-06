#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> a;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]== '(' || s[i] == '+' || s[i] == '-' || s[i] =='/' || s[i] =='*')
        {
            a.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(a.top() == '(' && s[i]==')')
            {
                return true;
            }
            else{
               while(a.top()!='('){
                   a.pop();
               }
                a.pop();
            }
        }
    }
    return false;
}
