link-https://leetcode.com/problems/verify-preorder-serialization-of-a-binary-tree/

Example 1:

Input: preorder = "9,3,4,#,#,1,#,#,2,#,6,#,#"
Output: true
  
  ```````


class Solution {
public:
    bool isValidSerialization(string preorder) {
       if(preorder.empty()){
           return false;
       }
        int count=1;
        int i=0;
        while(i<preorder.size() ){
            if(preorder[i]=='#'){
                count--;
            }
            else{
                count++;
            }
            if(count==0){
                break;
            }
           while(i<preorder.size()&&preorder[i++]!=','); 
        }
      return count==0&&i==preorder.size()-1;
    }
};
  
