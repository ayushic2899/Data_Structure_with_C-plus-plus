link-https://leetcode.com/problems/product-of-array-except-self/
Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]

```````````


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int>ans;
         int left[n];
          int right[n];  
        left[0]=1;
        right[n-1]=1;
       for(int i=1;i<nums.size();i++){
          left[i]=left[i-1]*nums[i-1];
       } 
        for(int i=n-2;i>=0;i--){
            right[i]=right[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            ans.push_back(left[i]*right[i]);
        }
        return ans;
    }
};
 
