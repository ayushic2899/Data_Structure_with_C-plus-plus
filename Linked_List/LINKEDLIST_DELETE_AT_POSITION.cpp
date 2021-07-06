/* Delete a Linked List node at a given position
Given a singly linked list and a position, delete a linked list node at the given position.*/

#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};
void push(Node** head,int val){
	Node* newnode= new Node();
	newnode->data=val;
	newnode->next=(*head);
	(*head)= newnode;
}

void deleteNode(Node** head,int pos){
	if(*head==NULL){
		return;
	}
	Node* temp=*head;
	if(pos==0){
		*head=temp->next;
		delete temp;
		return;
	}
	for(int i=0;temp!=NULL && i<pos-1;i++){
		temp=temp->next;
	}
	if(temp==NULL || temp->next==NULL){
		return;
	}
	Node* next=temp->next->next;
	delete temp->next;
	temp->next=next;
}



void printList(Node* node){
	while(node != NULL){
		cout<<node->data<<" ";
		node = node->next;
	}
}
int main(){
	Node* head=NULL;
	push(&head,7);
	push(&head,1);
	push(&head,3);
	push(&head,2);
	push(&head,8);
	cout<<"Created Linked List"<<endl;
	printList(head);
	deleteNode(&head,2);
	cout<<"After deletion"<<endl;
	printList(head);
	return 0;
}

