link- https://leetcode.com/problems/remove-outermost-parentheses/

Example 1:

Input: s = "(()())(())"
Output: "()()()"
Explanation: 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".
  
  ``````



class Solution {
public:
    string removeOuterParentheses(string s) {
        string str="";
        int count=0;
        for(int i=0;i<s.length();i++){
            if(count==0 && s[i]=='('){
                count++; //1
            }
            else if(count !=0 && s[i]=='('){
                str+=s[i];
                count++; //2
            }
            else if(count == 1 && s[i]==')'){
                count--;
            }
            else if(count !=1 && s[i]==')'){
                count--;
                str+=s[i];
            }
        }
        return str;
    }
};
