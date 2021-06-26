/* Insert a new node in linked list are discussed. A node can be added in three ways 
1) At the front of the linked list 
2) After a given node. 
3) At the end of the linked list.

Add a node at the front: (4 steps process) 
The new node is always added before the head of the given Linked List. 
And newly added node becomes the new head of the Linked List. 
For example, if the given Linked List is 10->15->20->25 and we add an item 5 at the front, then the Linked List becomes 5->10->15->20->25*/ 


#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

void push(Node** head,int val){
	Node* newnode=new Node();
	newnode->data=val;
	newnode->next=(*head);
	(*head)=newnode;
}

void insertAfter(Node* prev_node,int val){
	if(prev_node==NULL){
		cout<<"Previous node cannot be NULL";
		return;
	}
	Node* new_node = new Node();
	new_node->data=val;
	new_node->next=prev_node->next;
	prev_node->next=new_node;
}

void atend(Node** head,int val){
	Node* new_node=new Node();
	Node* temp= (*head);
	new_node->data=val;
	new_node->next=NULL;
	if(*head==NULL){
		*head=new_node;
		return;
	}
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=new_node;
	
}


void printList(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

int main(){
	Node* head=NULL;
	push(&head,7);
	 // Insert 6. So linked list becomes 6->NULL
    atend(&head, 6);
     
    // Insert 7 at the beginning.
    // So linked list becomes 7->6->NULL
    push(&head, 7);
     
    // Insert 1 at the beginning.
    // So linked list becomes 1->7->6->NULL
    push(&head, 1);
     
    // Insert 4 at the end. So
    // linked list becomes 1->7->6->4->NULL
    atend(&head, 4);
     
    // Insert 8, after 7. So linked
    // list becomes 1->7->8->6->4->NULL
    insertAfter(head->next, 8);
     
    cout<<"Created Linked list is: ";
	printList(head);
	
	return 0;
}










