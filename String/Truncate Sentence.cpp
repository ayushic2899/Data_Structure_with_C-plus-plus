link-https://leetcode.com/problems/truncate-sentence/

Example 1:

Input: s = "Hello how are you Contestant", k = 4
Output: "Hello how are you"
Explanation:
The words in s are ["Hello", "how" "are", "you", "Contestant"].
The first 4 words are ["Hello", "how", "are", "you"].
Hence, you should return "Hello how are you".
  
```````


class Solution {
public:
    string truncateSentence(string s, int k) {
        int count=0;
        string s1="";
        for(int i=0;i<s.size();i++){
            
            if(s[i]== ' '){
                count++;
                
            }
            if(count==k){
                break;
            }
            s1+=s[i];
        }
        return s1;
    }
};
