link-https://leetcode.com/problems/permutations/

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

``````````

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> store;
        
        helper(nums, 0, store);
        
        return store;
    }
    
    void helper(vector<int> current, int pos, vector<vector<int>> &store)
    {
        if(pos == current.size())
        {
            store.push_back(current);       
            return;
        }
        else
            for(int idx = pos; idx < current.size(); idx++)
            {
                swap(current[pos], current[idx]);        
                helper(current, pos + 1, store);         
            }
    }
};
