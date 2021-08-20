link-https://leetcode.com/problems/merge-sorted-array/

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

```````


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0 ; i<m ; i++)
            pq.push(nums1[i]); 
        for(int j=0 ; j<n ; j++)
            pq.push(nums2[j]);  
			nums1.clear();  
        while(!pq.empty()){
            nums1.push_back(pq.top());  
            pq.pop();
        }
        return ; 
    }
};
