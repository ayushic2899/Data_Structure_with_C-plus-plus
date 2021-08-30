link-https://leetcode.com/problems/self-dividing-numbers/

Example 1:

Input: left = 1, right = 22
Output: [1,2,3,4,5,6,7,8,9,11,12,15,22]

````````````


class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
      vector<int>ans;
      for(int i=left;i<=right;i++){
          int temp=i;
          while(temp>0){
              int digit=temp%10;
              if(digit==0 || i%digit != 0) break;
              temp/=10;
          }
          if(temp==0){
              ans.push_back(i);
          }
      }
        return ans;
    }
};
