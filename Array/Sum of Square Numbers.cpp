link-https://leetcode.com/problems/sum-of-square-numbers/


Example 1:

Input: c = 5
Output: true
Explanation: 1 * 1 + 2 * 2 = 5

````````````````

class Solution {
public:
    bool helper(long long num){
        long long l=0;
        long long r=num;
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
    bool judgeSquareSum(int c) {
        if(c==0){
            return true;
        }
        for(long i=0;i*i<c;i++){
            long long s=c-i*i;
            if(helper(s)){
                return true;
            }
        }
        return false;
         
    }
};

