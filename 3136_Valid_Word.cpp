class Solution {
public:
    bool isvowel(char c)
    {
        if(c=='a' || c=='e' || c=='i' || c=='o'  || c=='u' || c=='A'  || c=='E' || c=='I' || c=='O' || c=='U')
        {
            return true;
        }

        return false;
    }
    bool isValid(string word) {
        if(word.size()<3){
            return false;
        }
        bool vo=false,cons=false,num=false;
        for(int i=0;i<word.size();i++)
        {
            if((word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= 'a' && word[i] <= 'z'))
            {
                if(isvowel(word[i])){
                    vo=true;
                }
                else{
                    cons=true;
                }
            }
            else if(word[i]>='0' && word[i]<='9'){
                // num=true;
            }
            else {
                return 0;
            }
            cout<<word[i]<<vo<<cons<<endl;
            
        }
        if(cons && vo){
                return true;
            }
        return false;
        
    }
};
