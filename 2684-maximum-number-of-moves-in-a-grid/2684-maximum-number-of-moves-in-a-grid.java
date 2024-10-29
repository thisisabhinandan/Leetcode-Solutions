class Solution {
    public int maxMoves(int[][] grid) {
        int n = grid.length; 
        int m = grid[0].length; 
        int [][] dp = new int[n][m];
        for(int i=0;i<n;i++)
        {
            dp[i][0]=1;
        } int ans=0;
        for(int j=1;j<m;j++)
        {
            for(int i=0;i<n;i++)
            {
                if(i+1<n && grid[i][j]>grid[i+1][j-1] && dp[i+1][j-1]!=0)
                {
                    dp[i][j]=Math.max(1+dp[i+1][j-1],dp[i][j]);
                }
                if(i-1>=0 && grid[i][j]>grid[i-1][j-1] && dp[i-1][j-1]!=0)
                {
                    dp[i][j]=Math.max(1+dp[i-1][j-1],dp[i][j]);
                }
                if(grid[i][j]>grid[i][j-1] && dp[i][j-1]!=0)
                {
                    dp[i][j]=Math.max(1+dp[i][j-1],dp[i][j]);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans=Math.max(ans,dp[i][j]);
            }
        }
        return ans-1;
    }
}