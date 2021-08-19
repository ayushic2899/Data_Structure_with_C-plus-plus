link- https://leetcode.com/problems/sum-of-all-odd-length-subarrays/

Example 1:

Input: arr = [1,4,2,5,3]
Output: 58
Explanation: The odd-length subarrays of arr and their sums are:
[1] = 1
[4] = 4
[2] = 2
[5] = 5
[3] = 3
[1,4,2] = 7
[4,2,5] = 11
[2,5,3] = 10
[1,4,2,5,3] = 15
If we add all these together we get 1 + 4 + 2 + 5 + 3 + 7 + 11 + 10 + 15 = 58
  
  ```````



class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int count=0;  
            int x=0;
            for(int j=i;j<n;j++){  
                count+=arr[j];  
                if(x%2 == 0){    
                    sum+=count;    
                }
                x++;  
            }
        }
        return sum;
    }
};
