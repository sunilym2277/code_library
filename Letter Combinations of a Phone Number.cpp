class Solution {
    private:
    void solve(string digits,int index,vector<string> &ans,string out,string map[]){
        if(index>=digits.length())
        {
            ans.push_back(out);
            return;
        }
        
        int element=digits[index]-'0';
        string val=map[element];
        
        for(int i=0;i<val.length();i++)
        {
            out.push_back(val[i]);
            solve(digits,index+1,ans,out,map);
            out.pop_back();
        }
        
        
    }
public:
    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;
        
        if(digits.length()==0)
            return ans;
        
        string out;
        int index=0;
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,index,ans,out,map);
        return ans;
    }
};
