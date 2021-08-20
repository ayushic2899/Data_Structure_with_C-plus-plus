link-https://leetcode.com/problems/valid-sudoku/


class Solution {
public:
    bool isvalid(vector<vector<char>>& board, int x, int y){
        int row = board.size();
        int col = board[0].size();
        char val = board[x][y]; 
        for(int i=0;i<row;++i){
            if(i==x) continue;
            if(board[i][y]==val) return false;
        }
        
        for(int j=0;j<col;++j){
            if(j==y) continue;
            if(board[x][j]==val) return false;
        }
        
        int r=(x/3)*3, c=(y/3)*3;
        
        for(int i=r; i<r+3; ++i){
            for(int j=c; j<c+3; ++j){
                if(i==x && j==y) continue;
                if(board[i][j]==val) return false;
            }
        }
        
        return true;
        
    }  
    
    
    bool isValidSudoku(vector<vector<char>>& board) {
        int row=board.size();
        int col=board[0].size();
         for(int i=0;i<row;++i){
            for(int j=0;j<col;++j){
                if(board[i][j]!='.' && !isvalid(board,i,j)) return false;
            }
         }
        return true;
    }
};
 
 
 
    
        
        
         
