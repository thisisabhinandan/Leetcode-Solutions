class Solution {
    public boolean exist(char[][] board, String word) {
        for(int i=0;i<board.length;i++)
        {
            for(int j=0;j<board[0].length;j++)
            {
                if(board[i][j]==word.charAt(0) && backtrack(board,word,0,i,j))
                {
                    return true; 
                }
            }
        }
        return false;
    }
    public boolean backtrack(char [][]board, String word,int idx, int i, int j)
    {
        if(idx==word.length())
        {
            return true; 
        }
        if(!isvalid(board,word,idx,i,j))
        {
            return false;
        }
        char temp=board[i][j];
        board[i][j]='.'; 
        boolean found=backtrack(board,word,idx+1,i-1,j)||backtrack(board,word,idx+1,i+1,j)||backtrack(board,word,idx+1,i,j-1)||backtrack(board,word,idx+1,i,j+1);
        board[i][j]=temp;
        return found;
        
    }
    public boolean isvalid(char [][]board, String word,int idx, int i, int j)
    {
        return i>=0 && i<board.length && j>=0 && j<board[0].length && word.charAt(idx)==board[i][j];
    }
}