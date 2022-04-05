#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


int getTotalX(vector<int> a, vector<int> b) {
    
    int c=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
      for(int j=a[a.size()-1];j<b[0]+1;j++)
        {
            
            int p=0;
            for(int i=0;i<a.size();i++)
           {
               
               
               
              if(j%a[i]==0)
              {
                  p++;
                  //cout<<j<<" "<<a[i]<<"="<<p<<endl;
              } 
              if(p==a.size())
              {
                  int zz=0;
                  for(int k=0;k<b.size();k++)
                  {
                    if(b[k]%j==0)
                    {
                      cout<<j<<" "<<b[k]<<"="<<zz<<endl;
                        zz++;
                  
                    }
                    
                      
                      if(zz==b.size())
                        {
                           c++; 
                           cout<<c<<endl;
                           zz=0;
                        }
                  }
                  
                  
              }
           }
      
        }
        //cout<<c<<endl;
    return c;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    string brr_temp_temp;
    getline(cin, brr_temp_temp);

    vector<string> brr_temp = split(rtrim(brr_temp_temp));

    vector<int> brr(m);

    for (int i = 0; i < m; i++) {
        int brr_item = stoi(brr_temp[i]);

        brr[i] = brr_item;
    }

    int total = getTotalX(arr, brr);

    fout << total << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
