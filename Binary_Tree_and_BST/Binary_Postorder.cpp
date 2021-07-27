#include<stdio.h>
#include<malloc.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node * createNode(int data){
	struct node *n; // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void postOrder(struct node* root){
	if(root!=NULL){
		postOrder(root->left);
		postOrder(root->right);
			printf("%d ",root->data);
	}
}
// Finally The tree looks like this:
    //      4
    //     / \
    //    1   6
    //   / \
    //  5   2
    //postorder=left-right-root
int main(){
    struct node *p = createNode(4);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(5);
    struct node *p4 = createNode(2);
    
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    
    postOrder(p);
    return 0;
}
