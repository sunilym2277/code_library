class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
                int m,n;
        m=matrix.size();
            
        n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            int start,end,mid;
               start=0;
               end=n-1;
               mid=start+(end-start)/2;
        
               while(start<=end)
               {
                   int ele=matrix[i][mid];
                   if(ele==target)
                       return 1;
                   
                   else if (ele>target)
                       end=mid-1;
                   else {
                       start =mid+1;
                   }
                   
                   mid=start+(end-start)/2;
               }
        }
        
               return 0;
    }
    };
