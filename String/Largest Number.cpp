link-https://leetcode.com/problems/largest-number/

Example 1:

Input: nums = [10,2]
Output: "210"
  
  ````````````````

bool compare(string a,string b){
        return a+b > b+a;
    }
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(to_string(nums[i]));
        } 
        sort(ans.begin(),ans.end(),compare);
        string res;
        for(string i:ans){
            res+=i;
        }
        if(res[0]=='0'){
            return "0";
        }
        return res;
    }
};
