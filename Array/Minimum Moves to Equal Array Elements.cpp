link-https://leetcode.com/problems/minimum-moves-to-equal-array-elements/

Example 1:

Input: nums = [1,2,3]
Output: 3
Explanation: Only three moves are needed (remember each move increments two elements):
[1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]

``````````````````


class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=INT_MAX;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<n){
                n=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            ans+=nums[i]-n;
        }
    return ans;
    }
    
};
