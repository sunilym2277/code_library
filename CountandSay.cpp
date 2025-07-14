class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        while(--n){
            string pt="";
            for(int i=0;i<s.size();i++)
            {
                int temp=1;
                while(i+1 <s.size() && s[i]==s[i+1])
                {
                    temp++;
                    i++;
                }
                pt=pt + to_string(temp) + s[i];
                // cout<<pt<<endl;
            }
            s=pt;
        }
        return s;
    }
};
