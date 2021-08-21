link-https://leetcode.com/problems/find-the-highest-altitude/

Example 1:

Input: gain = [-5,1,5,0,-7]
Output: 1
Explanation: The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.
  
  ````````````

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int result=0;
        int count=0;
        for(int i=0;i<gain.size();i++){
            count+=gain[i];
            result=max(result,count);
        }
        return result;
    }
};
