link-https://leetcode.com/problems/k-diff-pairs-in-an-array/
  
  
Example 1:

Input: nums = [3,1,4,1,5], k = 2
Output: 2
Explanation: There are two 2-diff pairs in the array, (1, 3) and (3, 5).
Although we have two 1s in the input, we should only return the number of unique pairs.
  
  ````````````


class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
       for(int i = 0; i < nums.size(); i++) 
            mp[nums[i]]++;
        int res = 0;
        if(k==0){
            for(auto x:mp){
                if(x.second >1){
                    res++;
                }
            }
        }
        else{
            for(auto x:mp){
                if(mp.find(x.first+k) != mp.end()){
                    res++;
                }
            }
        }
        return res;
    }
};
