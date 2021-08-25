link-https://leetcode.com/problems/valid-perfect-square/

Example 1:

Input: num = 16
Output: true
  
  ``````````


class Solution {
public:
    bool isPerfectSquare(int num) {
        long l=1;
        long r=num;
        
        while(l<=r){
            long mid=(l+r)/2;
            if(mid*mid == num){
                return true;
            }
            else if(mid*mid < num){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return false;
    }
};

