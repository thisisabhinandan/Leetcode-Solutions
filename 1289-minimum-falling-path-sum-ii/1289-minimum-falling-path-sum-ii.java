class Solution {
    public int minFallingPathSum(int[][] grid) {
        int n=grid.length; int [][]dp=new int[n][n]; int ans=Integer.MAX_VALUE;
        for(int i=0;i<n;i++)
        {
            dp[0][i]=grid[0][i];
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int mini=Integer.MAX_VALUE;
                for(int k=0;k<n;k++)
                {
                    if(k!=j) 
                    {
                        mini=Math.min(mini,dp[i-1][k]);
                    }
                }
                dp[i][j]=grid[i][j]+mini;
            }
        }
        for(int i=0;i<n;i++)
        {
            ans=Math.min(ans,dp[n-1][i]);
        }
        return ans;
    }
}