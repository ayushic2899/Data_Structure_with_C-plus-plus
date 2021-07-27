#include<stdlib.h>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int data){
	struct node* n=(struct node*)malloc(sizeof(struct node));
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

int minValue(struct node* root){
	struct node* current = root;
	while(current->left !=NULL){
		current = current->left;
	}
	return current->data;	
}

int main(){
	struct node* root=NULL;
	root=insert(root,22);
	insert(root,15);
	insert(root,12);
	insert(root,17);
	insert(root,32);
	insert(root,29);
	printf("The tree is \n");
	traversetree(root);
	
	printf("Minimum value in BST IS \n");
	cout<<minValue(root);
	return 0;
}
