Input: nums = [1,1,2,2,2,3]
Output: [3,1,1,2,2,2]
Explanation: '3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.

````

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        //fre  num
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>maxh;
        vector<int>v;
        for(auto i=mp.begin();i!=mp.end();i++){
            maxh.push({(i->second)*(-1),i->first});
        }
        
        while(maxh.size()>0){
            int fre=-maxh.top().first;
            int elem=maxh.top().second;

            for(int i=0;i<fre;i++){
                v.push_back(elem);
            }
            maxh.pop();
        }
        
        return v;
    }
};
