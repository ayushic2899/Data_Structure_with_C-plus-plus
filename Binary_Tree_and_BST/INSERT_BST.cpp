#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int data){
	struct node* n = (struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}
void traversetree(struct node* root){
	if(root!=NULL){
		traversetree(root->left);
		printf("%d \t",root->data);
		traversetree(root->right);
	}
}
struct node* insert(struct node* root,int data){
	if(root==NULL){
		return newNode(data);
	}
	    if(data<root->data){
		    root->left=insert(root->left,data);
	    }
	    else if(data>root->data){
	    	root->right=insert(root->right,data);
		}
		return root;
}
int main(){
	struct node* root=NULL;
	root = insert(root,23);
	insert(root,15);
	insert(root,12);
	insert(root,17);
	insert(root,32);
	insert(root,29);
	printf("The tree is ");
	traversetree(root);
   printf("\nInseting 45 to the tree\n");
   insert(root, 45);
   printf("Tree after insertion is :\n");
   traversetree(root);
   return 0;
}
