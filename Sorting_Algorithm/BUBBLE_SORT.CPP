//
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

1. Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.
2. Best Case Time Complexity: O(n). Best case occurs when array is already sorted.
3. Auxiliary Space: O(1)
//


#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int counter=1;
    while(counter<n-1){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
                 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
