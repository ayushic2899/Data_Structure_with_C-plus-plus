Input: nums = [10,9,2,5,3,7,101,18]
Output: 4
Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.
  
  ``````



class Solution {
public:
    
    int lcs(int x,int y,vector<int>&s1,vector<int>&s2){
        int dp[x+1][y+1];
        for(int i=0;i<=x;i++){
            dp[i][0]=0;
        }
        for(int j=0;j<=y;j++){
            dp[0][j]=0;
        }
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                   dp[i][j]=max(dp[i-1][j],dp[i][j-1]);          
                }
            }
        }
        return dp[x][y];
    }
    
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>rev=nums;
        sort(rev.begin(),rev.end());
        vector<int>::iterator ip = unique(rev.begin(),rev.end());
        rev.erase(ip,rev.end());
        int m = rev.size();
        
        return lcs(n,m,nums,rev);
    }
};
