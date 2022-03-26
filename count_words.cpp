#include <iostream>
#include <cstring>
using namespace std;

int countWords(string str) {
    // Write your code here
    int count =0;
        for (int i = 0; str[i] != '\0';i++)
    {
        if (str[i] == ' ')
            count++;    
    }
    return count+1;
}

int main() {
    string input;
    getline(cin, input);
    int output = countWords(input);
    cout << output << endl;
    return 0;
}
