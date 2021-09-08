link-https://leetcode.com/problems/single-element-in-a-sorted-array/
Example 1:

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
  
  ````````````````````

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0;
        int e=nums.size()-1;
        while(l<e){
            int mid=(l+e)/2;
            if((mid%2==0 && nums[mid]==nums[mid+1]) || (mid%2==1 && nums[mid]==nums[mid-1])){
                l=mid+1;
            }
               else{
                   e=mid;
               }
        }
               return nums[l];
    }
};
 
