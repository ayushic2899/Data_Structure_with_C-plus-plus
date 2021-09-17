link-https://leetcode.com/problems/largest-odd-number-in-string/

```````````````

class Solution {
public:
    string largestOddNumber(string num) {
        string o="";
        for(int i=num.length();i>=0;i--){
            if((num[i]-'0')%2 != 0){
                return num.substr(0,i+1);
            }
            
        }
        return "";
    }
};
