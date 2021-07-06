// function to delete a Linked List

/* Algorithm For C/C++: Iterate through the linked list and delete all the nodes one by one. The main point here is not to access the next of the current pointer if the current pointer is deleted.
In Java and Python, automatic garbage collection happens, so deleting a linked list is easy. Just need to change head to null.*/

#include <bits/stdc++.h>
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

void printList(Node* node){
	while(node != NULL){
		cout<<node->data<<" ";
		node=node->next;
	}
}

void deleteList(Node** head){
	Node* current = *head;
	Node* next=NULL;
	while(current != NULL){
		next=current->next;
		delete current;
		current=next;
	}
	*head=NULL;
}

int main(){
	Node* head=NULL;
	push(&head,7);
	push(&head,6);
	push(&head,5);
	push(&head,4);
	push(&head,3);
	cout<<"Creating a Linked list"<<endl;
	printList(head);
	
	deleteList(&head);
	cout<<"Linked list Deleted"<<endl;
}
