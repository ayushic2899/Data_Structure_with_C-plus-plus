Given the root of a binary tree and an integer targetSum, return all root-to-leaf paths where each path's sum equals targetSum.
A leaf is a node with no children.
  
Input: root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
Output: [[5,4,11,2],[5,8,4,5]]

``````


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>>ans;
    void dfs(TreeNode* root, int targetSum,vector<int>&path){
        if(root==nullptr){
            return;
        }
        path.push_back(root->val);
        targetSum=targetSum-root->val;
        if(root->left==nullptr && root->right==nullptr){
            if(targetSum==0){
                ans.push_back(path);
            }
        }
        else{
            dfs(root->left,targetSum,path);
            dfs(root->right,targetSum,path);
        }
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        dfs(root,targetSum,path);
        return ans; 
    }
};

 
