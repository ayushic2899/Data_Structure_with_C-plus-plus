link-https://leetcode.com/problems/determine-if-string-halves-are-alike/

Example 1:

Input: s = "book"
Output: true
Explanation: a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, they are alike.
  
  ``````


class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        int mid=n/2;
        int count1=0;
        int count2=0;
        for (char& c : s) {
              if (c >= 'A' && c <= 'Z') c += 32;
        }
        for(int i=0;i<mid;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){
                count1++;
            }
        }
         for(int i=mid;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){
                count2++;
            }
        }
        if(count1==count2){
            return true;
        }
        return false;
    }
};
