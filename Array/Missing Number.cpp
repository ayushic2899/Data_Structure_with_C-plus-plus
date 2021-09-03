link-https://leetcode.com/problems/missing-number/

Example 1:

Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
  
  ````````````


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1=0;
        int ans=0;
      int n=nums.size();
        
      int sum=n*(n+1)/2;
      for(int i=0;i<n;i++){
          sum1+=nums[i];
           
      }
        return  sum-sum1; 
    }
};
