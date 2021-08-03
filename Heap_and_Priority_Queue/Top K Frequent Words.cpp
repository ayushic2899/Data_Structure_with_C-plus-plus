Input: ["i", "love", "leetcode", "i", "love", "coding"], k = 2
Output: ["i", "love"]
Explanation: "i" and "love" are the two most frequent words.
    Note that "i" comes before "love" due to a lower alphabetical order.
 
  ````

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        priority_queue<pair<int,string>, vector<pair<int,string>>, greater<pair<int,string>>>maxh;
        vector<string>v;
        for(auto i=mp.begin();i!=mp.end();i++){
            maxh.push({-(i->second),i->first});
             
        }
        while(k--){
            v.push_back(maxh.top().second);
            maxh.pop();
        }
     
        return v;
    }
};

 
