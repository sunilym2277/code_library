#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <cstring>
using namespace std;

string z="";

string reverseEachWord(string str)
{
    // Write your code here
         string word;
  
    // making a string stream
    stringstream iss(str);
  
    // Read and print each word.
    while (iss >> word){
        reverse(word.begin(),word.end());
        //cout<<word<<" ";
        z=z+word+" ";
    }
    return z;
}

int main()
{

    string str;
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;
    ;
}
