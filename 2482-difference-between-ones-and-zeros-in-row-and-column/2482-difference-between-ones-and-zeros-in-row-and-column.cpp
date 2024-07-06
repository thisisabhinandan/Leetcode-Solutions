class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size(); int n=grid[0].size();   int rone=0; int rzero=0; 
        vector<int> orow(m); vector<int> ocol(n);  int cone=0; int czero=0; 
        vector<int> zrow(m); vector<int> zcol(n);  vector<vector<int>> ans(m, vector<int>(n, 0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0) rzero++;
                else rone++;
            }
            orow[i]=rone;
            zrow[i]=rzero;
            rone=0; rzero=0;  
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[j][i]==0) czero++;
                else cone++;
            }
            ocol[i]=cone;
            zcol[i]=czero;
            cone=0; czero=0;  
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans[i][j]=orow[i]+ocol[j]-zrow[i]-zcol[j];
            }
        }
        return ans;
    }
};