link-https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/

Example 1:

Input: s = "][]["
Output: 1
Explanation: You can make the string balanced by swapping index 0 with index 3.
The resulting string is "[[]]".
  
  ``````````````````


class Solution {
public:
    int minAddToMakeValid(string s) {
        int count1=0;
        int count2=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count1++;
            }
            else if(s[i]==')'){
                count1--;
            }
            if(count1 == -1){
                count2++;
                count1++;
            }
        }
        return count1+count2;
    }
};
