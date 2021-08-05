Input: n = 12
Output: 3
Explanation: 12 = 4 + 4 + 4.
  
``````


class Solution {
public:
    int numSquares(int n) {
        int dp[10001];
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            int min=n;
            for(int j=1;j*j<=i;j++){
                int ans=i-(j*j);
                if(dp[ans]<min){
                    min=dp[ans];
                }
            }
            dp[i]=1+min;
        }
        return dp[n];
       
    }
};
