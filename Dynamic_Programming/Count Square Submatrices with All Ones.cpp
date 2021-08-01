'''
  Input: matrix =
[
  [0,1,1,1],
  [1,1,1,1],
  [0,1,1,1]
]
Output: 15
Explanation: 
There are 10 squares of side 1.
There are 4 squares of side 2.
There is  1 square of side 3.
Total number of squares = 10 + 4 + 1 = 15.
  
  '''

  
  
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int sum=0;
       
        
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        int count2=0;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(matrix[i-1][j-1]==1){
                    dp[i][j] = min(min(dp[i - 1][j - 1], dp[i - 1][j]),  dp[i][j - 1]) + 1;
                    count2+=dp[i][j];
                }
            }
        }
        return count2;
    }
};

 


 
