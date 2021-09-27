link-https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/

``````````````````````


class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int total=0,sum=0;
        for(int i=0;i<n;i++){
             total+=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            sum+=nums[i];
            ans.push_back(nums[i]);
            if(sum>total-sum){
                break;
            }
        }
        return ans;
    }
};
     
