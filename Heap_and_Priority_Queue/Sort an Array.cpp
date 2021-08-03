Input: nums = [5,2,3,1]
Output: [1,2,3,5]

````


class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int>ans;
        priority_queue<int,vector<int>,greater<int>>minh;
        for(int i=0;i<nums.size();i++){
            minh.push(nums[i]);
        }
        while(minh.size()>0){
            ans.push_back(minh.top());
            minh.pop();
        }
        return ans;
    }
};
