class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            if(board[i][0]=='O') bfs(board,i,0);
            if(board[i][m-1]=='O') bfs(board,i,m-1);
        }
        for(int j=0;j<m;j++)
        {
            if(board[0][j]=='O') bfs(board,0,j);
            if(board[n-1][j]=='O') bfs(board,n-1,j);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='O') board[i][j]='X';
                if(board[i][j]=='T') board[i][j]='O';
            }
        }
    }
    void bfs(vector<vector<char>>& board, int i, int j)
    {
        int n=board.size();
        int m=board[0].size();
        queue<pair<int,int>>q; 
        q.push({i,j}); 
        board[i][j]='T'; 
        int dr[]={0,1,-1,0};
        int dc[]={1,0,0,-1};
        while(!q.empty())
        {
            int r=q.front().first; 
            int c=q.front().second; 
            q.pop(); 
            for(int k=0;k<4;k++)
            {
                int nr=r+dr[k];
                int nc=c+dc[k];
                if(isvalid(nr,nc,n,m)&&board[nr][nc]=='O')
                {
                    board[nr][nc]='T';
                    q.push({nr,nc});
                }
            }
        }
    }
    bool isvalid(int nr,int nc,int n,int m)
    {
        return nr>=0&&nc>=0&&n>nr&&m>nc;
    }
};