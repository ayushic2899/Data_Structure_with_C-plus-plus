link-https://leetcode.com/problems/min-cost-climbing-stairs/

Example 1:

Input: cost = [10,15,20]
Output: 15
Explanation: Cheapest is: start on cost[1], pay that cost, and go to the top.
  
  ````````````````


class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
         int n=cost.size();
        vector<int>dp(n+1);
        for(int i=2;i<=n;i++){
            int jumpone=dp[i-1]+cost[i-1];
            int jumptwo=dp[i-2]+cost[i-2];
            dp[i]=min(jumpone,jumptwo);
        }
        return dp[n];
    }
};

 
