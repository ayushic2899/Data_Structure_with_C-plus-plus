link-https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/

Example 1:

Input: firstWord = "acb", secondWord = "cba", targetWord = "cdb"
Output: true
Explanation:
The numerical value of firstWord is "acb" -> "021" -> 21.
The numerical value of secondWord is "cba" -> "210" -> 210.
The numerical value of targetWord is "cdb" -> "231" -> 231.
We return true because 21 + 210 == 231.

`````````````

class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
       int first=0,second=0,target=0;
        for(int i=0;i<firstWord.size();i++){
            first=first*10 + (firstWord[i]-'a');
        }
        for(int i=0;i<secondWord.size();i++)
            second=second*10 +(secondWord[i]-'a');
        
        for(int i=0;i<targetWord.size();i++)
            target=target*10 +(targetWord[i]-'a');
        
        return first+second==target;
    }
};
