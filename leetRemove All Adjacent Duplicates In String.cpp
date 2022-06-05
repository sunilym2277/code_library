class Solution {
public:
    string removeDuplicates(string s) {
        int i;
        for( i=1;i<s.length();i++)
        {
           // cout<<i<<endl;
            if(s[i]==s[i-1])
            {
                i--;
                s.erase(i,2);
                
                    if(i>0)
                        i--;
            }
        }
        
        return s;
    }
};
