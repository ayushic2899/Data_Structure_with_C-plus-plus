link-https://leetcode.com/problems/largest-number-at-least-twice-of-others/

Example 1:

Input: nums = [3,6,1,0]
Output: 1
Explanation: 6 is the largest integer.
For every other number in the array x, 6 is at least twice as big as x.
The index of value 6 is 1, so we return 1.

  
  ``````````````


class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=nums[maxi]){
                maxi=i;
                 
            }
        }
        for(int i=0;i<nums.size();i++){
             if(nums[maxi] != nums[i]){
                 if(nums[i]*2 >nums[maxi]) return -1;
             }
        }
        return maxi; 
    }
};
