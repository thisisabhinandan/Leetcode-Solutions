class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q; 
        int n=grid.size(); int m=grid[0].size();
        vector<vector<int>> visited=grid;
        int mins=-1; int freshorange=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(visited[i][j]==2)
                {
                    q.push({i,j});
                }
                else if(visited[i][j]==1)
                {
                    freshorange++;
                }
            }
        }
        if(freshorange==0) return 0;
        int dr[]={0,1,-1,0};
        int dc[]={1,0,0,-1};
        while(!q.empty())
        {
             mins++;
            int size=q.size();
            while(size--)
            {
            int r=q.front().first; 
            int c=q.front().second;
            q.pop();
            for(int k=0;k<4;k++)
            {
                int nr=r+dr[k];
                int nc=c+dc[k];
                if(isvalid(nr,nc,n,m)&&visited[nr][nc]==1)
                {
                    visited[nr][nc]=2; 
                    q.push({nr,nc});
                    freshorange--;
                }
            }
        }
        }
        if(freshorange==0) return mins;
        else return -1;
    }
    bool isvalid(int nr,int nc,int n,int m)
    {
        return nr>=0&&nc>=0&&n>nr&&m>nc;
    }
};