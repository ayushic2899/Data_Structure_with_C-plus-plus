link-https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 7
Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
  
  ``````````


class Solution {
public:
    int maxProfit(vector<int>& prices) {
      if(prices.size()==1){
          return 0;
      }     
        int ans=0;
       for(int i=0;i<prices.size()-1;i++){
           if(prices[i]<prices[i+1]){
               ans+=prices[i+1]-prices[i];
           }
       }
        return ans;
    }
};
