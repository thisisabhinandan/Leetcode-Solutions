class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    int maxi=bfs(grid,i,j);
                    ans=max(ans,maxi);
                }
            }
        }
        return ans;
    }
    int bfs(vector<vector<int>>& grid, int i, int j)
    {
        int cnt=1;
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> q; 
        q.push({i,j});
        grid[i][j]=0;
        int dr[]={0,1,-1,0};
        int dc[]={1,0,0,-1};
        while(!q.empty())
        {
            int r=q.front().first; 
            int c=q.front().second;
            q.pop();
        for(int k=0;k<4;k++)
        {
            int nr=dr[k]+r;
            int nc=dc[k]+c;
            if(isvalid(nr,nc,n,m)&&grid[nr][nc]==1)
            {
                cnt++; 
                grid[nr][nc]=0;
                q.push({nr,nc});
            }
        } 
        }
       return cnt;
    }
    bool isvalid(int nr,int nc,int n,int m)
    {
        return nr>=0&&nc>=0&&n>nr&&m>nc;
    }
};