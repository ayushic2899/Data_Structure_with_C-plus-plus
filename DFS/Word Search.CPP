LINK-https://leetcode.com/problems/word-search/

Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
Output: true

  `````

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0] && dfs(board,i,j,word,0)){
                    return true;
                }
            }
        }
            return false;
    }
    bool dfs(vector<vector<char>>& board,int i,int j,string word,int count){
            if(count==word.size()){
                return true;
            }
            if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j] != word[count]){
                return false;
            }
            char temp=board[i][j];
            board[i][j]=' ';
            bool found =dfs(board,i+1,j,word,count+1) || dfs(board,i-1,j,word,count+1) ||
                     dfs(board,i,j+1,word,count+1) || dfs(board,i,j-1,word,count+1);
            board[i][j]=temp;   
            return found;
    }
};
 
