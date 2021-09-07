link-https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/

Example 1:

Input: n = 4
Output: "pppz"
Explanation: "pppz" is a valid string since the character 'p' occurs three times and the character 'z' occurs once. Note that there are many other valid strings such as "ohhh" and "love".
  
  `````````````````

class Solution {
public:
    string generateTheString(int n) {
        string s="";
         
        if(n%2 != 0){
            s=string(n, 'a');
        }
        else{
            s=string(n-1,'a')+'b'; 
        }
          
        return s;
    }
};
