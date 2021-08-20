link-https://leetcode.com/problems/intersection-of-two-arrays-ii/

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]

```````


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>freq;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            freq[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(freq[nums2[i]]>0){
                 freq[nums2[i]]--; 
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
};
