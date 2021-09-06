link-https://leetcode.com/problems/string-matching-in-an-array/

Example 1:

Input: words = ["mass","as","hero","superhero"]
Output: ["as","hero"]
Explanation: "as" is substring of "mass" and "hero" is substring of "superhero".
["hero","as"] is also a valid answer.
  
 `````````````````````


class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        unordered_set<string>ans;
        vector<string>v;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                if(  i != j && words[i].find(words[j])!=std::string::npos){
                    ans.insert(words[j]);
                }
            }
        }
        for(auto i:ans){
           v.push_back(i); 
        }
        return v;
    }
};
