link-https://leetcode.com/problems/transpose-matrix/


Example 1:

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]

``````````````

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> ans(m, vector<int>(n, 0));
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                ans[j][i] = matrix[i][j];
            }
        }
        
        return ans;
    }
};
 
 
