#include<stdio.h>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;

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

int LCA(struct node* root,int &p,int &q){
	if(p>root->data && q>root->data){
	    return LCA(root->right,p,q);
	}
	else if(p<root->data && q<root->data){
		return LCA(root->left,p,q);
	}
	else if(p<root->data && q>root->data){
		return root->data;
	}
}
int main(){
	struct node* root=NULL;
	root = insert(root,3);
	insert(root,5);
	insert(root,1);
	insert(root,6);
	insert(root,2);
	insert(root,0);
	insert(root,8);
    insert(root,7);
    insert(root,4);
	printf("The tree is ");
	traversetree(root);
    int p=5;
    int q=4;
    cout<<"LCA is = "<<LCA(root,p,q);
    return 0;
}
