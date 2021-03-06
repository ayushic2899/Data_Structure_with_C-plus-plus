//
QuickSort is a Divide and Conquer algorithm. 
It picks an element as pivot and partitions the given array around the picked pivot. 
There are many different versions of quickSort that pick pivot in different ways. 

1. Always pick first element as pivot.
2. Always pick last element as pivot (implemented below)
3. Pick a random element as pivot.
4. Pick median as pivot.
//

# PROGRAM

#include <iostream>
using namespace std;

int partition(int a[],int lb,int ub){
	int pivot=a[lb];
	int start=lb+1;
	int end=ub;
	while(a[start]<=pivot){
		start++;
	}
	while(a[end]>pivot){
		end--;
	}
	if(start<end){
		swap(a[start],a[end]);
	}
	else{
		swap(a[lb],a[end]);
	}
	return end;
}

void Quicksort(int a[],int lb,int ub){
	int loc;
	if(lb<ub){
		loc=partition(a,lb,ub);
		Quicksort(a,lb,loc-1);
		Quicksort(a,loc+1,ub);
	}
}

void printArray(int a[],int n)
{
    for (int i=0;i<n;i++)
      cout<<a[i]<<endl;
}

int main(){
	int a[] = { 12, 11, 13, 5, 6, 7 };
    int n= sizeof(a) / sizeof(a[0]);

    cout<<"before sort";
    printArray(a,n);
 
    Quicksort(a,0,n-1);
    
    cout<<"After quick sort";
    printArray(a, n);
    return 0;
}
