link-https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/
Input: words = ["cat","bt","hat","tree"], chars = "atach"
Output: 6
Explanation: 
The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.
  
 ``````


class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        bool flag;
        int res=0;
        unordered_map<char,int>mp;
        for(auto ch: chars){
            mp[ch]++;
        }
        for(auto it:words){
            unordered_map<char,int>curr;
            for(auto ch:it){
                curr[ch]++;
            }
            flag=true;
            for(auto it :curr){
                if(curr[it.first]>mp[it.first]){
                    flag=false;
                    break;
                }
            }
            if(flag){
                res+=it.size();
            }
            
        }
        return res;
    }
};
 
         
