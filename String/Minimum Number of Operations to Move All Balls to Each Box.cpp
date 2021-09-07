link-https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/

Example 1:

Input: boxes = "110"
Output: [1,1,3]
Explanation: The answer for each box is as follows:
1) First box: you will have to move one ball from the second box to the first box in one operation.
2) Second box: you will have to move one ball from the first box to the second box in one operation.
3) Third box: you will have to move one ball from the first box to the third box in two operations, and move one ball from the second box to the third box in one operation.
  
  ```````````````````


class Solution {
public:
    vector<int> minOperations(string boxes) {
      vector<int>ans;
      for(int i=0;i<boxes.size();i++){
          int count=0;
          for(int j=0;j<boxes.size();j++){
              if(boxes[j]=='1'){
                 count+= abs(i - j);
              }
          }
          ans.push_back(count);
      } 
        return ans;
    }
};
