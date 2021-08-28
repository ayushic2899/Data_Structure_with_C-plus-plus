link-https://leetcode.com/problems/merge-strings-alternately/
 
Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r

````````


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0,m=word1.size(),n=word2.size();
        string ans="";
        while(i<m || j<n){
            if(i<m){
                ans+=word1[i];
                i++;
            
            }
            if(j<n){
                ans+=word2[j];
                j++;
                
            }
        }
        return ans;
    }
};

 
