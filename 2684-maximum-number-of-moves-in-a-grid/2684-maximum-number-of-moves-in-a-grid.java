class Solution {
    public int maxMoves(int[][] grid) {
        int n = grid.length; 
        int m = grid[0].length; 
        int [][] dp = new int[n][m];
        
        // Initialize the dp array with -1 to indicate unreachable cells
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                dp[i][j] = -1;
            }
        }
        
        // Since we can start from any cell in the first column, set dp[i][0] = 0
        for(int i = 0; i < n; i++) {
            dp[i][0] = 0;
        }
        
        // Iterate over the grid to fill dp values
        for(int j = 0; j < m - 1; j++) {  // Columns from 0 to m - 2
            for(int i = 0; i < n; i++) {
                if(dp[i][j] != -1) {  // If the current cell is reachable
                    int currentValue = grid[i][j];
                    // Move to (i - 1, j + 1)
                    if(i > 0 && grid[i - 1][j + 1] > currentValue) {
                        dp[i - 1][j + 1] = Math.max(dp[i - 1][j + 1], dp[i][j] + 1);
                    }
                    // Move to (i, j + 1)
                    if(grid[i][j + 1] > currentValue) {
                        dp[i][j + 1] = Math.max(dp[i][j + 1], dp[i][j] + 1);
                    }
                    // Move to (i + 1, j + 1)
                    if(i < n - 1 && grid[i + 1][j + 1] > currentValue) {
                        dp[i + 1][j + 1] = Math.max(dp[i + 1][j + 1], dp[i][j] + 1);
                    }
                }
            }
        }
        
        // Find the maximum moves from the dp array
        int ans = 0; 
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                ans = Math.max(ans, dp[i][j]);
            }
        }
        return ans;
    }
}
