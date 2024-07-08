class Solution {
public:
    void setZeroes(vector<vector<int>>& grid) {
        int n=grid.size(); int m=grid[0].size();
        vector<bool> row(n,false); vector<bool> col(m,false); 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                {
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(row[i]||col[j])
                {
                    grid[i][j]=0;
                }
            }
        }
    }
};