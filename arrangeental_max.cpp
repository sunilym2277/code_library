#include<bits/stdc++.h>
using namespace std;
int findMaximumSubMatrix(vector<vector<int>> matrix, int n, int m){
    // stores the prefixSum of rows
    vector<vector<int>> prefixSum(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            prefixSum[i][j] = matrix[i][j];
    }
    // calculation prefix sum for each row
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++)
            prefixSum[i][j] += prefixSum[i][j-1];
    }
    // store indices of submatrix with maximum sum
    int startCol = 0, endCol = 0, startRow = 0, endRow = 0;
    int maxSum = INT_MIN;
    
    // use Kadane's algorithm for finding maximum contiguous sum in 1D array
    for(int firstCol=0;firstCol<m;firstCol++){
        for(int secondCol=firstCol;secondCol<m;secondCol++){
            int tmp[n]; // stores the sum between two columns for each row
            for(int row=0;row<n;row++)
                tmp[row] = prefixSum[row][secondCol] - (firstCol>0 ? prefixSum[row][firstCol-1] : 0);
            int curSum = 0, curMaxSum = 0;
            int curStartRow = 0, tmpStartRow = 0, curEndRow = -1;
            
            for(int curRow=0;curRow<n;curRow++){
                curSum += tmp[curRow];
                if(curSum < 0) {
                    curSum = 0;
                    tmpStartRow = curRow+1;
                } else if(curSum > curMaxSum) {
                    curMaxSum = curSum;
                    curStartRow = tmpStartRow;
                    curEndRow = curRow;
                }
            }
            if(curEndRow == -1) {
                curMaxSum = tmp[0];
                curStartRow = 0;
                curEndRow = 0;
                for(int i=1;i<n;i++){
                    if(tmp[i] > curMaxSum){
                        curMaxSum = tmp[0];
                        curStartRow = i;
                        curEndRow = i;
                    }
                }
            }
            if(curMaxSum > maxSum){
                maxSum = curMaxSum;
                startCol = firstCol;
                endCol = secondCol;
                startRow = curStartRow;
                endRow = curEndRow;
            }
        }
    }
    int late=maxSum;
    //cout<<"Sub-matrix with max Sum"<<endl;
    for(int i=startRow;i<=endRow;i++){
        for(int j=startCol;j<=endCol;j++){
            //cout<<matrix[i][j]<<" ";
            if(matrix[i][j]<0)
            {
                late =late+abs(matrix[i][j]);
            }
        
        }
        //cout<<endl;
    }
    cout<<maxSum<<endl;
    return late;
}
int main(){
        int n,m;cin>>n>>m;
        vector<vector<int>> matrix(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cin>>matrix[i][j];
        }
        int ans = findMaximumSubMatrix(matrix, n, m);
        cout<<ans<<endl;
    
}
