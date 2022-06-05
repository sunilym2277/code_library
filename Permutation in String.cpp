class Solution {
public:
    
    bool check(int a[],int b[])
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
                return 0;
        }
        return 1;
    }
    
    
    bool checkInclusion(string s1, string s2) {
        int c1[26]={0};
        int c2[26]={0};
        
        int m=s1.length();
        int n=s2.length();
        for(int i=0;i<m;i++)
        {
            int index=s1[i]-'a';
            c1[index]++;
        }
        int i=0;
        while(i<m && i<n)
        {
            int index=s2[i]-'a';
            c2[index]++;
            
            i++;
            
        }
        if(check(c1,c2))
        {
            return 1;
        }
        
        while(i<n)
        {
            int newi=s2[i]-'a';
            c2[newi]++;
            
            int oldi = s2[i-m]-'a';
            c2[oldi]--;
            
            if(check(c1,c2))
            {
                return 1;
            }
            
            i++;
        }
        
        return 0;
    }
};
