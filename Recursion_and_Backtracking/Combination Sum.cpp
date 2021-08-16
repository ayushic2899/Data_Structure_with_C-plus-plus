link-https://leetcode.com/problems/combination-sum/

Example 1:

Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.
  
  `````````

class Solution {
public:

    void helper(int index, int target, vector<int>&candidates, vector<int>&ds, vector<vector<int>>&ans){
        if(index == candidates.size()){
            if(target == 0)
            {
                ans.push_back(ds);
            }
             return;
        }
        if(candidates[index] <= target){
            ds.push_back(candidates[index]);
            helper(index, target- candidates[index], candidates, ds, ans);
            ds.pop_back();
        }
        helper(index+1, target, candidates, ds, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target){
        vector<vector<int>>ans;
        vector<int>ds;
        helper(0, target,candidates,ds,ans);
        return ans; 
    }
};
  
