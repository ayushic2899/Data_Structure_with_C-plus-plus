link-https://leetcode.com/problems/second-largest-digit-in-a-string/

Example 1:

Input: s = "dfa12321afd"
Output: 2
Explanation: The digits that appear in s are [1, 2, 3]. The second largest digit is 2.

``````````````````


class Solution {
public:
    int secondHighest(string s) {
        set<int>ans;
        vector<int>v;
        for(int i=0;i<s.length();i++){
            if(s[i]>=48 && s[i]<=57){
                ans.insert(s[i]-'0');
            }
        }
        for(auto i:ans){
            v.push_back(i);
        }
        sort(v.begin(),v.end(),greater<int>());
        if(v.size()<2){
            return -1;
        }
        return v[1];
    }
};
