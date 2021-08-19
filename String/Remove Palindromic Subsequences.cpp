link-https://leetcode.com/problems/remove-palindromic-subsequences/

Example 1:

Input: s = "ababa"
Output: 1
Explanation: s is already a palindrome, so its entirety can be removed in a single step.
  
``````


class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.size()==0) return 0;
        string str=s;
        reverse(str.begin(),str.end());
        if(s==str) return 1;
        return 2;
    }
};
 
