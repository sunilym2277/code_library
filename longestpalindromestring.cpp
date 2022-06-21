class Solution {
  public:
  bool ispal(string x)
  {
      int i=0,j=x.length()-1;
      while(i<j)
      {
          if(x[i++]!=x[j--])
             return 0;
      }     
      return 1;
  }
    string longestPalin (string s) {
        int n=s.length();
        for(int i=0;i<=n;i++)
        {
            int size=n-i;
            for(int j=0;j<=n-size;j++)
            {
                string p=s.substr(j,size);

                
                //cout<<p<<endl;
                if(ispal(p))
                {
                    return p;
                }
            }
        }
        return s;
    }
