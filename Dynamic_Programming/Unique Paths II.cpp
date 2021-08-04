Input: obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]
Output: 2
Explanation: There is one obstacle in the middle of the 3x3 grid above.
There are two ways to reach the bottom-right corner:
1. Right -> Right -> Down -> Down
2. Down -> Down -> Right -> Right

`````

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        if(grid[0][0]==1){
            return 0;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0){
                    if(grid[i][j] == 1 || (i!=0 && grid[i-1][j]==0) || (j!=0 && grid[i][j-1]==0)){
                        grid[i][j]=0;
                    }
                    else{
                        grid[i][j]=1;
                    }
                }
                else{
                    if(grid[i][j]==1){
                        grid[i][j]=0;
                    }
                    else{
                        grid[i][j]=grid[i-1][j] + grid[i][j-1];
                    }
                }
            }
        }
        return grid[m-1][n-1]; 
    }   
};
 
   
