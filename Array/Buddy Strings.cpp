link-https://leetcode.com/problems/buddy-strings/
Input: s = "ab", goal = "ba"
Output: true
Explanation: You can swap s[0] = 'a' and s[1] = 'b' to get "ba", which is equal to goal.
  
  ``````


class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }
        if(s==goal){
            unordered_set<char> a=unordered_set<char>(s.begin(),s.end());  
            return a.size()<s.length();
        }
        vector<int> v;
        for(int i=0;i<s.length();i++) {
            if(s[i] !=goal[i]){
                v.push_back(i);
            }
        }
         return (v.size()==2 && s[v[0]]==goal[v[1]] && s[v[1]]==goal[v[0]]); 
    }
};
 
        
        
        
         
       
