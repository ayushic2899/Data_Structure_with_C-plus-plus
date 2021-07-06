/* Deletion from a Circular Linked List
Case 1: List is empty. 
If the list is empty we will simply return.

Case 2:List is not empty  
If the list is not empty then we define two pointers curr and prev and initialize the pointer curr with the head node.
Traverse the list using curr to find the node to be deleted and before moving to curr to the next node, every time set prev = curr.
If the node is found, check if it is the only node in the list. If yes, set head = NULL and free(curr).
If the list has more than one node, check if it is the first node of the list. Condition to check this( curr == head). If yes, then move prev until it reaches the last node. 
After prev reaches the last node, set head = head -> next and prev -> next = head. Delete curr.
If curr is not the first node, we check if it is the last node in the list. Condition to check this is (curr -> next == head).
If curr is the last node. Set prev -> next = head and delete the node curr by free(curr).
If the node to be deleted is neither the first node nor the last node, then set prev -> next = curr -> next and delete curr. */


#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int val){
			data=val;
			next=NULL;
		}
};
 void insertAtHead(Node* &head,int val){
 	Node* n=new Node(val);
 	if(head==NULL){
 		n->next=n;
 		head=n;
 		return;
	 }
 	 
 	Node* temp=head;
	while(temp->next!=head){
	  	temp=temp->next;
	}
	temp->next=n;
	n->next=head;
	head=n;
 }
 
 void insertAtTail(Node* &head,int val){
 	Node* n=new Node(val); 
 	if(head==NULL){
 		insertAtHead(head,val);
 		return;
	 }
	  Node* temp=head;
	  while(temp->next!=head){
	  	temp=temp->next;
	  }
	  temp->next=n;
	  n->next=head;
	  
 }
 
void deleteAtHead(Node* &head){
	Node* temp=head;
	while(temp->next!=head){
		temp=temp->next;
	}
	Node* todelete=head;
	temp->next=head->next;
	head=head->next;
	
	delete todelete;
}
 
void deletion(Node* &head,int pos){
	if(pos==1){
		deleteAtHead(head);
		return;
	}
	Node* temp=head;
	int count=1;
	while(count != pos-1){
		temp=temp->next;
		count++;
	}
	Node* todelete=temp->next;
	temp->next=temp->next->next;
	
	delete todelete;
}
 void display(Node* head){
 	Node* temp=head;
    do{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	while(temp!=head);
	cout<<endl;
	 
 }
 
 int main(){
 	Node* head=NULL;
 	insertAtHead(head,1);
 	insertAtHead(head,2);
 	insertAtHead(head,3);
 	insertAtHead(head,4);
 	display(head);
 	insertAtTail(head,5);
 	insertAtTail(head,6);
 	display(head);
 	
 	deletion(head,4);
 	display(head);
 	deleteAtHead(head);
 	display(head);
 	
 	return 0;
 }










