link- https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

 Example 1:

Input: s = "())"
Output: 1
  
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
