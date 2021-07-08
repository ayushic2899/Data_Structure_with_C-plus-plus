// Stack in C++ STL

/* Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end and (top) an element is removed from that end only.  
Stack uses an encapsulated object of either vector or deque (by default) or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements.

Stack Syntax:-

For creating  a stack, we must include the <stack> header file in our code. We then use this syntax to define the std::stack:

The functions associated with stack are: 
empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the top most element of the stack – Time Complexity : O(1) */

#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<int>stack;
	stack.push(21);
	stack.push(22);
	stack.push(23);
	stack.push(24);
	//stack.pop();
	//stack.pop();
	
	while(!stack.empty()){
		cout<<" "<<stack.top();
		stack.pop();
	}
}


