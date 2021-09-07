link-https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/

Example 1:

Input: s = "abacbc"
Output: true
Explanation: The characters that appear in s are 'a', 'b', and 'c'. All characters occur 2 times in s.
  
  ``````````````


class Solution {
public:
    bool areOccurrencesEqual(string s) {
      unordered_map<char,int>mp;
      for(int i=0;i<s.size();i++){
          mp[s[i]]++;
      }
      int count=mp[s[0]];
      for(auto it:mp){
          if(count!=it.second){
              return false;
          }
      }
        return true;
    }
};
