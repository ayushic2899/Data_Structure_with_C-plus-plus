link-https://leetcode.com/problems/find-pivot-index/

Example 1:

Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11
  
````````````````

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }//28
        int a=0;
        for(int i=0;i<nums.size();i++){
            sum=sum-nums[i]; 
            if(sum==a){
                return i;
            }
            a+=nums[i];
        }
        return -1;
    }
};
