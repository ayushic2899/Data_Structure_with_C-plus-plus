link-https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/

Example 1:

Input: target = [1,2,3,4], arr = [2,4,1,3]
Output: true
Explanation: You can follow the next steps to convert arr to target:
1- Reverse sub-array [2,4,1], arr becomes [1,4,2,3]
2- Reverse sub-array [4,2], arr becomes [1,2,4,3]
3- Reverse sub-array [4,3], arr becomes [1,2,3,4]
There are multiple ways to convert arr to target, this is not the only way to do so.
  
  
`````````````



class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<target.size();i++){
            mp1[target[i]]++;
        }
        for(int j=0;j<arr.size();j++){
            mp2[arr[j]]++;
        }
        if(mp1==mp2){
            return true;
        }
        return false;
    }
};
