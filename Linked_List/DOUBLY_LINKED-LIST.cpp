/* Doubly Linked List 
A Doubly Linked List (DLL) contains an extra pointer, typically called previous pointer, together with next pointer and data which are there in singly linked list.
Following are advantages/disadvantages of doubly linked list over singly linked list.
Advantages over singly linked list 
1) A DLL can be traversed in both forward and backward direction. 
2) The delete operation in DLL is more efficient if pointer to the node to be deleted is given. 
3) We can quickly insert a new node before a given node. 
In singly linked list, to delete a node, pointer to the previous node is needed. To get this previous node, sometimes the list is traversed. In DLL, we can get the previous node using previous pointer. 
 

 
Disadvantages over singly linked list 
1) Every node of DLL Require extra space for an previous pointer. It is possible to implement DLL with single pointer though (See this and this). 
2) All operations require an extra pointer previous to be maintained. For example, in insertion, we need to modify previous pointers together with next pointers. For example in following functions for insertions at different positions, we need 1 or 2 extra steps to set previous pointer.
Insertion 
A node can be added in four ways 
1) At the front of the DLL 
2) After a given node. 
3) At the end of the DLL 
4) Before a given node.*/
#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node* prev;
		
		Node(int val){
			data=val;
			next=NULL;
			prev=NULL;
		}	
};

void insertAtHead(Node* &head,int val){
	Node* n=new Node(val);
	n->next=head;
	if(head!=NULL){
	   head->prev=n;	
	}
	head=n;  
}

void insertAtTail(Node* &head,int val){
	if(head==NULL){
		insertAtHead(head,val);
		return;
	}
	Node* n=new Node(val);
	Node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	n->prev=temp;
	n->next=NULL;
}

void display(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
 
}

int main(){
	Node* head=NULL;
	insertAtTail(head,1);
 	insertAtTail(head,2);
 	insertAtTail(head,3);
 	insertAtTail(head,4);
 	display(head);
 	  
 	insertAtHead(head,6);
 	display(head);
 	
 	return 0;
}
