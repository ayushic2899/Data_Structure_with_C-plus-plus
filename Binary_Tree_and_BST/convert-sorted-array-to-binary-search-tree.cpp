link-https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

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
     int preorder(TreeNode* root,int sum){
        if(root==nullptr){
            return 0;
        }
        sum=(2*sum)+root->val;
        if(root->left==nullptr && root->left==nullptr){
            return sum;
        }
        return preorder(root->left,sum)+preorder(root->right,sum);
    }
    int sumRootToLeaf(TreeNode* root) {
        return preorder(root,0);
    }
};
