link-https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

Example 1:

Input: nums = [1,2,3,3]
Output: 3
  
  `````````````

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        for (auto i = 0; i < nums.size() - 2; ++i){
            if(nums[i]==nums[i+1] || nums[i]==nums[i+2]){
                return nums[i];
            }
        } 
        return nums[nums.size()-1];
    }
};
    
    
 
