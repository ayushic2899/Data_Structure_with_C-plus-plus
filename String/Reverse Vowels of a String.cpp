class Solution {
public:
    string reverseVowels(string s) {
       int i=0;
       const unordered_set<char> vowels {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
         
       int j=s.size()-1;
       while(i<j){
           // find next vowel from left
            while (i < j and not vowels.count(s[i])) {
                i += 1;
            }
            // find next vowel from right
            while (j >= 0 and not vowels.count(s[j])) {
                j -= 1;
            }
            // swap them
            if (i < j) {
                swap(s[i], s[j]);
                i += 1;
                j -= 1;
            } 
       }
     return s;
    }
};

 

      
      
