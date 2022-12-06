#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  // Write your code here
    if(str.length()%2==1){
        return -1;
    }
    stack<char> s;
    int c1=0,c2=0,x;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='{'){
            s.push(str[i]);
        }
        else{
            if(!s.empty() && s.top()=='{'){
                s.pop();
            }
            else{
                s.push(str[i]);
            }
        }
    }
    while(!s.empty()){
        if(s.top()=='{'){
            c1++;
        }
        else{
            c2++;
        }
        s.pop();
    }
    int ans=(c1+1)/2  + (c2 + 1)/2;
    return ans;
}
