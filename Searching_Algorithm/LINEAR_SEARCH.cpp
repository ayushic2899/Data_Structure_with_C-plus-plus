//
The time complexity of the above algorithm is O(n). 

Linear search is rarely used practically because other search algorithms such as the binary search algorithm 
and hash tables allow significantly faster-searching comparison to Linear search.
//

#PROGRAM

#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int x){
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[]={2,3,4,10,40};
	int x=4;
	int n=sizeof(arr)/sizeof(arr[0]);
	int result=LinearSearch(arr,n,x);
	
	if(result==-1){
		cout<<"Elemnt not found";
	}
	else{
		cout<<"Found at index  "<<result;
	}
	return 0;
}
