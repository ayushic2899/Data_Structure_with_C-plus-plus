'''
Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
Output: 4
 '''
  
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        int ans=0;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(matrix[i-1][j-1]=='1'){
                    dp[i][j] = min(min(dp[i - 1][j - 1], dp[i - 1][j]),  dp[i][j - 1]) + 1;
                    ans=max(ans,dp[i][j]);
                }
            }
        }
        return ans*ans;
    }
};


 
