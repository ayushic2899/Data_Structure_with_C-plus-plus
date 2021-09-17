link-https://leetcode.com/problems/unique-number-of-occurrences/

```````````````

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        set<int>s;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int ele=0;
        for(auto i:mp){
            ele++;
            s.insert(i.second);
        }
        return s.size()==ele;
    }
};
 
