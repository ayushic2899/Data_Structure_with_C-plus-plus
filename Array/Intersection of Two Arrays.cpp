link-https://leetcode.com/problems/intersection-of-two-arrays/


Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]

`````

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>ans(nums1.begin(),nums1.end());
        vector<int>res;
         for(int i:nums2){
             if(ans.count(i)){
                 res.push_back(i);
                 ans.erase(i);
             }
         }
        return res;
    }
};

 
