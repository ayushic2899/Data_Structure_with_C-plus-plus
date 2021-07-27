class Solution{
  public:
void inorder(Node* root,vector<int>&v){
    if(!root){
       return NULL;
    }
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}

Node* solve(int start,int end){
    if(start>end){
    return NULL;
    }
    int mid=(start+end)/2;
    Node* root=v[mid];
    root->left = solve(start,mid-1);
    root->right = solve(mid+1,end);
}
 
Node *BSTtoBalanced(Node *root)
    {
        vector<int>v;
        inorderBST(root,v);
        int n=v.size();
        start=0;
        end=n;
        solve(start,end)
        return root;
    }
