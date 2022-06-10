class Solution {
    

public:
    int countPrimes(int n) {
        vector<bool> s(n+1,true);
        int k=0;
        s[0]=s[1]=0;
        for(int i=2;i<n;i++)
        {
            if(s[i])
            {
                k++;
                for(int j=2*i;j<n;j=j+i)
                    s[j]=0;
            }
        }
        return k;
    }
};
