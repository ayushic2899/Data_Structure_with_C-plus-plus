link-https://leetcode.com/problems/minimum-absolute-difference-in-bst/

```````````


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
    vector<int>ans;
    
    void inorder(TreeNode* root){
        if(!root){
            return;
        }
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
         inorder(root);
        int v=INT_MAX;
        for(int i=0;i<ans.size()-1;i++){
           v=min(v,ans[i+1]-ans[i]); 
        }
            return v;
    }
};
