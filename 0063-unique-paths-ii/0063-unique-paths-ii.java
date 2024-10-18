class Solution {
    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        int n=obstacleGrid.length; 
        int m=obstacleGrid[0].length; 
        int [][]dp=new int[n][m];
        if(obstacleGrid[0][0]!=1) dp[0][0]=1; 
        else return 0;
        for(int i=1;i<n;i++)
        {
           if(obstacleGrid[i][0]!=1)
           {
               dp[i][0]=1;
           }
            else{
                dp[i][0]=0;
                break;
            }
        }
         for(int i=1;i<m;i++)
        {
           if(obstacleGrid[0][i]!=1)
           {
               dp[0][i]=1;
           }
            else{
                dp[0][i]=0;
                break;
            }
        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if(obstacleGrid[i][j]==1)
                {
                    dp[i][j]=0;
                }
                else{
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
            }
        }
        return dp[n-1][m-1];
    }
}