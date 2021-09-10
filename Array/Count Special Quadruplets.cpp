link-https://leetcode.com/problems/count-special-quadruplets/

Example 1:

Input: nums = [1,2,3,6]
Output: 1
Explanation: The only quadruplet that satisfies the requirement is (0, 1, 2, 3) because 1 + 2 + 3 == 6.
  
  
``````````````````````


class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=n-1;i>1;i--)
        {
            for(int j=i-1;j>0;j--)
            {
                for(int k=j-1;k>=0;k--)
                {
                    if (mp.count(nums[i] + nums[j] + nums[k]))
                    {
                        ans += mp[nums[i] + nums[j] + nums[k]]; 
                    }
                }
            }
            mp[nums[i]]++;
        }  
        return ans;
    }
};

 
                
                 
