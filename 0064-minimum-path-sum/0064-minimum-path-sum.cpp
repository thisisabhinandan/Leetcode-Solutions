class Solution {
public:
    int solve(vector<vector<int>>& dp,vector<vector<int>>& grid,int i,int j)
    {
        if(i<0||j<0) return 1e9; 
        if(i==0&&j==0) return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=grid[i][j]+min(solve(dp,grid,i-1,j),solve(dp,grid,i,j-1));
        dp[i][j]=ans;
        return ans;
        
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> dp (m+1,vector<int>(n+1,-1));
        return solve(dp,grid,m-1,n-1);
    }
};