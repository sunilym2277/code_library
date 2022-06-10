class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m,n;
        m=matrix.size();
            
        n=matrix[0].size();
        int start,end,mid;
               start=0;
               end=m*n -1;
               mid=start+(end-start)/2;
        //ut<<start<<" " <<end<<" " <<mid<<" " <<matrix[row][mid]<<endl;
               while(start<=end)
               {
                   int ele=matrix[mid/n][mid%n];
                   if(ele==target)
                       return 1;
                   
                   else if (ele>target)
                       end=mid-1;
                   else {
                       start =mid+1;
                   }
                   
                   mid=start+(end-start)/2;
               }
               return 0;
    }
};
