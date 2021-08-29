link-https://leetcode.com/problems/next-greater-element-i/

Example 1:

Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
Output: [-1,3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
- 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
- 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
  
  ````````````


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i = 0; i < nums1.size(); i++)
        {
           bool flag = false;
        
           for(int j = 0; j < nums2.size(); j++)
           {
               if(nums1[i]==nums2[j]){
                   for(int k=j+1;k<nums2.size();k++){
                      if(nums2[k]>nums1[i]){
                          res.push_back(nums2[k]);
                          flag=true;
                          break;
                      } 
                   }
               }
               if(flag){
                   break;
               }
           }
            if(!flag){
                res.push_back(-1);
            }
        }
        return res;
    }
};
  
