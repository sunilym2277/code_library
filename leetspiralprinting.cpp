class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> r;
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        int total=row*col;
        int sr=0,sc=0;
        int er=row-1;
        int ec=col-1;
        while(count<total)
        {
            for(int i=sc;count<total && i<=ec;i++)
            {
                r.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
            for(int i=sr;count<total && i<=er;i++)
            {
                r.push_back(matrix[i][ec]);
                count++;
            }
            ec--;
            
            for(int i=ec;count<total && i>=sc;i--)
            {
                r.push_back(matrix[er][i]);
                count++;
            }
            er--;
            
            for(int i=er;count<total && i>=sr;i--)
            {
                r.push_back(matrix[i][sc]);
                count++;
            }
            sc++;
            cout<<count<<endl;
        }
        return r;
    }
};
