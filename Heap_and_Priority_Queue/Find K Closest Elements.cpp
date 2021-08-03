Input: arr = [1,2,3,4,5], k = 4, x = 3
Output: [1,2,3,4]
````

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
         priority_queue<pair<int,int>>maxh;
         for(int i=0;i<arr.size();i++){
             maxh.push({abs(arr[i]-x),arr[i]});
             if(maxh.size()>k){
                 maxh.pop();
             }
         }
        while(maxh.size()>0){
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
         sort(ans.begin(), ans.end());
        return ans;
    }
}; 

 
 
