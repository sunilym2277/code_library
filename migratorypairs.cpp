#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



int migratoryBirds(vector<int> arr) {
    int a[6];
    for(int i=1;i<6;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==1)
        {
            a[1]++;
        }
        else if(arr[i]==2)
        {
            a[2]++;
        }
        else if(arr[i]==3)
        {
            a[3]++;
        }
        else if(arr[i]==4)
        {
            a[4]++;
        }
        else if(arr[i]==5)
        {
            a[5]++;
        }
        
    }
    int max=a[1],z=1;
    for(int i=2;i<6;i++)
    {
        cout<<a[i]<<" "<<i<<endl;
        if(a[i]>max)
        {
            max=a[i];
            z=i;
        }
    }
    
return z;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = migratoryBirds(arr);

    fout << result << "\n";

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
