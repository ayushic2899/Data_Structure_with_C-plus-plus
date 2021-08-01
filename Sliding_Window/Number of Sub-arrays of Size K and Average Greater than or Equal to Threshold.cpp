Input: arr = [2,2,2,2,5,5,5,8], k = 3, threshold = 4
Output: 3
Explanation: Sub-arrays [2,5,5],[5,5,5] and [5,5,8] have averages 4, 5 and 6 respectively. All other sub-arrays of size 3 have averages less than 4 (the threshold).
  '''


class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int j=0;
        int sum=0;
        int count=0;
        
        for(int i=0;i<k-1;i++){
            
            sum+=arr[i];
            }
        
        while(j+k-1<arr.size()){
            sum=sum+arr[j+k-1];
            if (sum/k>=threshold){
                count++;
            }
            
            sum=sum-arr[j];
            
            j++;
            
     
            
        }
        return count;
        
    }
};
 


 
