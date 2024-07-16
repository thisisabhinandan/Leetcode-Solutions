class Solution {
    public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(); int m=grid[0].size(); int cnt=0;
        vector<vector<int>>visited (n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!visited[i][j]&&grid[i][j]=='1')
                {
                    cnt++;
                    bfs(grid,i,j,visited);
                }
            }
        }
        return cnt;
    }
    void bfs(vector<vector<char>>& grid,int& i,int& j,vector<vector<int>>& visited)
    {
        int n=grid.size(); 
        int m=grid[0].size();
        int dr[]={1,0,-1,0};
        int dc[]={0,1,0,-1};
        queue<pair<int,int>> q; 
        visited[i][j]=true;
        q.push({i,j});
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int k=0;k<4;k++)
            {
                int nr=r+dr[k];
                int nc=c+dc[k];
                if(nr>=0 && nc>=0 && n>nr && m>nc && !visited[nr][nc] && grid[nr][nc]=='1')
                {
                    visited[nr][nc]=1; 
                    q.push({nr,nc});
                }
            }
        }
    }
};