class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int x=strs.size();
        int p=strs[0].length();
        //cout<<x<<" "<<p<<endl;
        int c=0,t=0;
        string z="";
        for(int i=0;i<p;i++)
        {
            t=0;
           for(int j=1;j<x;j++)
           {
               //cout<<strs[j][i]<<"  "<<strs[0][i]<<endl;
               if(strs[j][i]==strs[0][i])
               {
                   t++;
                   
                   
               }
           }
            //cout<<t<<" "<<p<<endl;
            if(t==x-1)
            {
                //z.append(strs[0][i])
                z+=strs[0][i];
                //cout<<z<<endl;
                    
                c++;
            }
            else{
                break;
            }
        }
      return z;  
    }
};
