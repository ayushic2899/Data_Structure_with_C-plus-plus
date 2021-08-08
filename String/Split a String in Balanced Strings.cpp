Input: s = "RLRRLLRLRL"
Output: 4
Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.
  
``````


class Solution {
public:
    int balancedStringSplit(string s) {
        int countL=0;
        int countR=0;
        int count=0;
       for(int i=0;i<s.length();i++){
           if(s[i]=='L'){
               countL++;
           }
           else{
               countR++;
           }
           if(countL==countR){
               count++;
           }
 
       } 
        return count;
    }
};

 
