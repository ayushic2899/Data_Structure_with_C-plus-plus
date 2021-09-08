link-https://leetcode.com/problems/shifting-letters/

Example 1:

Input: s = "abc", shifts = [3,5,9]
Output: "rpl"
Explanation: We start with "abc".
After shifting the first 1 letters of s by 3, we have "dbc".
After shifting the first 2 letters of s by 5, we have "igc".
After shifting the first 3 letters of s by 9, we have "rpl", the answer.
  
  `````````````````````
  
  
class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
       int sum=0;
        for(int i=s.size()-1;i>=0;i--){
            sum=(sum+shifts[i])%26;
            s[i]=(s[i]-'a'+ sum)%26+'a';
        }
        return s;
    }
};
