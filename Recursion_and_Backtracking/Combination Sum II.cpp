link-https://leetcode.com/problems/combination-sum-ii/submissions/

Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]

``````


class Solution {
public:
    void helper(int ind, int target, vector<int>&candidates, vector<int>&ds, vector<vector<int>>&ans){
        
            if(target == 0)
            {
                ans.push_back(ds);
                return;
            }
        for(int i=ind;i<candidates.size();i++){
            if(i>ind && candidates[i]==candidates[i-1]){
                continue;
            }
            if(candidates[i]>target){
                break;
            }
            ds.push_back(candidates[i]);
             helper(i+1, target-candidates[i],candidates,ds,ans);
            ds.pop_back();
        }
     }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        helper(0, target,candidates,ds,ans);
        return ans; 
    }
};
