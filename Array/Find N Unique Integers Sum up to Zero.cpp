link-https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/

Example 1:

Input: n = 5
Output: [-7,-1,1,3,4]
Explanation: These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].
  
  ```````````````

class Solution {
public:
    vector<int> sumZero(int n) {
      
		vector<int> res;
        if(n == 0) return res;
        if(n%2 != 0) res.push_back(0);  
        for(int i=1;i<=floor(n/2);i++){
            res.push_back(i);
            res.push_back(-i);
        }
        return res;
 
    }
};
