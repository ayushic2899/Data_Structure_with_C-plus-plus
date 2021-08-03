Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]

```


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>maxh;
        vector<int>v;
        for(auto i=mp.begin();i!=mp.end();i++){
            maxh.push({(i->second),i->first});
            if(maxh.size()>k){
                maxh.pop();
            }
        }
        
        while(maxh.size()>0){
            v.push_back(maxh.top().second);
            maxh.pop();
        }
        
        return v;
    }
};

  
