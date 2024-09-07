class Solution {
    public boolean isValidSudoku(char[][] board) {
        for(int i=0;i<board.length;i++)
        {
            for(int j=0;j<board[0].length;j++)
            {
                if(board[i][j]!='.'&&(!okrow(board,i,j)||!okcolumn(board,i,j)||!okbox(board,i,j)))
                {
                    return false; 
                }
            }
        }
        return true;
    }
    public boolean okrow(char board[][],int i,int j)
    {
        for(int r=0;r<board.length;r++)
        {
             if(i!=r && board[r][j]==board[i][j])
                {
                    return false;
                }
        }
        return true; 
    }
    public boolean okcolumn(char board[][],int i,int j)
    {
        for(int c=0;c<board.length;c++)
        {
                if(c!=j && board[i][c]==board[i][j])
                {
                    return false;
                }
        }
        return true; 
    }
        
    public boolean okbox(char board[][],int i,int j)
    {
        int row=(i/3)*3; 
        int col=(j/3)*3; 
        for(int r=row;r<row+3;r++)
        {
            for(int c=col;c<col+3;c++)
            {
                if((r!=i&&c!=j)&&board[r][c]==board[i][j])
                {
                    return false;
                }
            }
        }
        return true; 
    }
}
