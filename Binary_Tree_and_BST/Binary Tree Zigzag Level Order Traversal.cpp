link-https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
``````

**
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>res;
        if (root == NULL) 
        return res;
        queue<TreeNode*> q;
        q.push(root);
        int f=1;
    
        while (q.empty() == false)
        { 
           vector<int>temp;
           int sz=q.size();
           while(sz--){
               TreeNode* t=q.front();
               temp.push_back(t->val);
               q.pop();
               if(t->left){
                   q.push(t->left);
               }
               if(t->right){
                   q.push(t->right);
               }
           }
           if(f%2==0){
               reverse(temp.begin(),temp.end());
           }
           res.push_back(temp);
           f++;
        }
        
        return res;
    }
};
