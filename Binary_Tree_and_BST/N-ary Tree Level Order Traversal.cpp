link - https://leetcode.com/problems/n-ary-tree-level-order-traversal/

Input: root = [1,null,3,2,4,null,5,6]
Output: [[1],[3,2,4],[5,6]]

`````



/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
     
     vector<vector<int>> levelOrder(Node* root) {
         vector<vector<int>>v;
         queue<Node*>q;
         if(root==NULL){
             return {};
         }
         q.push(root);
         while(!q.empty()){
             int n=q.size();
             vector<int>temp;
             for(int i=0;i<n;i++){
                 Node* curr=q.front();
                 q.pop();
                 temp.push_back(curr->val);
                 for(auto it : curr->children){
                     q.push(it);
                 }
             }
             v.push_back(temp);
         }
         return v;
        
    }
};


 
