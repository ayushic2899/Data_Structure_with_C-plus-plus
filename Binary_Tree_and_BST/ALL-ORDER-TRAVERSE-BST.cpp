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

void inorder(struct node* root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d \t",root->data);
		inorder(root->right);
	}
}

void preorder(struct node* root){
	if(root!=NULL){
		printf("%d \t",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(struct node* root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d \t",root->data);
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
	root = insert(root,20);
	insert(root,30);
	insert(root,10);
	insert(root,70);
	insert(root,90);
	insert(root,3);
	cout<<"Preorder traverse"<<endl;
	cout<<endl;
	preorder(root);
	cout<<endl;
	cout<<"Inorder traverse"<<endl;
    cout<<endl;
	inorder(root);
	cout<<endl;
    cout<<"Postorder traverse"<<endl;
    cout<<endl;
    postorder(root);
    return 0;
}
