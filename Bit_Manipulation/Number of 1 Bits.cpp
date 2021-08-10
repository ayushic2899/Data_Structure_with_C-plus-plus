Input: n = 00000000000000000000000000001011
Output: 3
Explanation: The input binary string 00000000000000000000000000001011 has a total of three '1' bits.

````
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n){
            if(n%2==1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
};
