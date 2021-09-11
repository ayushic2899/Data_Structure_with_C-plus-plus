link-https://leetcode.com/problems/remove-duplicate-letters/

Example 1:

Input: s = "bcabc"
Output: "abc"

`````````````````


class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>cnt(26,0);
        vector<bool>inRes(26, false);
       
    for(char ch:s) cnt[ ch-'a' ]++;
    string res = ""; //use res as a stack
    for(char ch:s){
       cnt[ ch-'a' ]--;
       if(res.empty()){ 
           res.push_back(ch);
           inRes[ ch-'a' ] = true;
           continue;
       }
       if(inRes[ch-'a']) continue;
       while(ch<res.back() && !res.empty() && cnt[ res.back()-'a' ]>0){
           inRes[ res.back()-'a' ] = false;
           res.pop_back();
           
       }
       res.push_back(ch);
       inRes[ ch-'a' ] = true;
    }
    return res;
    }
};
    
    


 
