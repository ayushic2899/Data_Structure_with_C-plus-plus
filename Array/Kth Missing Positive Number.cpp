link-https://leetcode.com/problems/kth-missing-positive-number/

Example 1:

Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.
  
  ```````````````


class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int n=arr.size()+k;
        int ind=0;
        for(int i=1;i<=n;i++){
            if(ind >=arr.size() || arr[ind]!=i){
                k--;
            }
            else{
                ind++;
            }
            if(k==0){
                return i;
            }
        }
        return-1;
    }
};
