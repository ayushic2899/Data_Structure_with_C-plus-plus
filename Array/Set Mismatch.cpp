link-https://leetcode.com/problems/set-mismatch/

Example 1:

Input: nums = [1,2,2,4]
Output: [2,3]


````````````````


class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
      unordered_map<int,int>mp;
        vector<int>ans;
      for(int i=0;i<nums.size();i++){
          mp[nums[i]]++;
      }
      for(int i=1;i<=nums.size();i++){
          if(mp[i]>1){
              ans.push_back(i);
          }
      }
        for(int i=1;i<=nums.size();i++){
            if (mp[i]==0){
                ans.push_back(i);
            }
        }
       return ans;
    }
};

 
