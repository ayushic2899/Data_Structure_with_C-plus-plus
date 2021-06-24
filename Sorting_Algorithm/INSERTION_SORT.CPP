//
Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
The array is virtually split into a sorted and an unsorted part.
Values from the unsorted part are picked and placed at the correct position in the sorted part.

Time Complexity: O(n^2) 
Auxiliary Space: O(1)
Boundary Cases: Insertion sort takes maximum time to sort if elements are sorted in reverse order. 
And it takes minimum time (Order of n) when elements are already sorted.
//



#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
	int key;
	for(int i=1;i<n;i++){
		key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	//printArray(arr,n);
	insertionSort(arr,n);
	printArray(arr,n);
	
	return 0;
}
