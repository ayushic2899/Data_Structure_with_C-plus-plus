Input: points = [[1,3],[-2,2]], k = 1
Output: [[-2,2]]
Explanation:
The distance between (1, 3) and the origin is sqrt(10).
The distance between (-2, 2) and the origin is sqrt(8).
Since sqrt(8) < sqrt(10), (-2, 2) is closer to the origin.
We only want the closest k = 1 points from the origin, so the answer is just [[-2,2]].
  
`````

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        
        priority_queue<pair<int,pair<int,int>>>maxh;
        
        for(int i=0;i<arr.size();i++)
        {
            int x=arr[i][0]*arr[i][0];
            int y=arr[i][1]*arr[i][1];
            int sum=x+y;
            
            maxh.push({sum,{arr[i][0],arr[i][1]}});
            
            if(maxh.size() > k){
                maxh.pop();
            }
        }
        
       
        vector<vector<int>>ans;
        
        while(!maxh.empty()){
            
            pair<int,int>pq=maxh.top().second;
            vector<int>temp;
            temp.push_back (pq.first);
            temp.push_back(pq.second);
            
            ans.push_back(temp);
            maxh.pop();
        }
        
        return ans;
    }
};
 
