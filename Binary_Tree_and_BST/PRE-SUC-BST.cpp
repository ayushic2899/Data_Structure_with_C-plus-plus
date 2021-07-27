#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
 

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* inpre(struct node* root){
	struct node* temp=root->left;
	while(temp->right){
		temp=temp->right;
	}
	return temp;
}

struct node* insuc(struct node* root){
	struct node* temp=root->right;
	while(temp->left){
		temp=temp->left;
	}
	return temp;
}

void findPreSuc(struct node* root,node* &pre,node* &suc,int data){
	if(root==NULL){
		return;
	}
	if(root->data==data){
		if(root->left){
			pre=inpre(root);
		}
		if(root->right){
			suc=insuc(root);
		}
		return;
	}
	if(data>root->data){
		pre=root;
		findPreSuc(root->right,pre,suc,data);
	}
	else if(data<root->data){
		suc=root;
		findPreSuc(root->left,pre,suc,data);
	}
}

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
	int data = 23;
	
	struct node* pre=NULL;
	struct node* suc=NULL;
	findPreSuc(root,pre,suc,data);
	 if (pre != NULL)
      cout << "Predecessor is " << pre->data << endl;
    else
      cout << "No Predecessor";
 
    if (suc != NULL)
      cout << "Successor is " << suc->data;
    else
      cout << "No Successor";
    return 0;
 
}
