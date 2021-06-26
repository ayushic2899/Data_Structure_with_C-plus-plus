/*First Simple Linked List in C Let us create a simple linked list with 3 nodes.*/


// A simple CPP program to introduce
// a linked list
#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};
// Program to create a simple linked
// list with 3 nodes
int main(){
	Node* head=NULL;
	Node* second=NULL;
	Node* third=NULL;
	
	head=new Node();
	second=new Node();
	third=new Node();
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	
	return 0;
	
}




