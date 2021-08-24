link-https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/

Example 1:

Input: nums = [1,1,1]
Output: 3
Explanation: You can do the following operations:
1) Increment nums[2], so nums becomes [1,1,2].
2) Increment nums[1], so nums becomes [1,2,2].
3) Increment nums[2], so nums becomes [1,2,3].
  
  ``````````````

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count=0;
       for(int i=0;i<nums.size()-1;i++){
           if(nums[i]<nums[i+1]){
              continue; 
           }
           else{
               count=count+(nums[i]+1-nums[i+1]);
               nums[i+1]=nums[i]+1;
           }
       } 
        return count;
    }
};

 
