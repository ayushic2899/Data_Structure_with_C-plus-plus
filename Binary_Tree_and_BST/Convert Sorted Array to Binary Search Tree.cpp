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
     TreeNode* binary(vector<int>&nums,int left,int right){
        if(left>right){
            return NULL;
        }
        int mid=(left+right)/2;
        TreeNode* node=new TreeNode(nums[mid]);
        node->left=binary(nums,left,mid-1);
        node->right=binary(nums,mid+1,right);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0){
            return NULL;
        }
        int left=0,right=nums.size()-1;
        return binary(nums,left,right);
        
    }
    
};
