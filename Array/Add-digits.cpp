link-https://leetcode.com/problems/add-digits/submissions/

Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
  
  ``````````````


class Solution {
public:
    int addDigits(int n)
    {
        if(n==0){
            return 0;
        }
        int s;
        while(n>9)
        {
            s=0;
            while(n>0)
            {
                s=s+n%10;
                n=n/10;
            }
            n=s;
        }
        return n;
    }
};
