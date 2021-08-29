link-https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/
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
    set<int>s;
    void check(TreeNode* root1){
        s.insert(root1->val);
        if(root1->left){
            check(root1->left);
        }
        if(root1->right){
            check(root1->right);
        }
    }
    int findSecondMinimumValue(TreeNode* root) {
       if(!root){
           return -1;
       }
        check(root);
        if(s.size()<2){
            return -1;
        }
        s.erase(s.begin());
        auto i=s.begin();
        return *i;
    }
};

 
