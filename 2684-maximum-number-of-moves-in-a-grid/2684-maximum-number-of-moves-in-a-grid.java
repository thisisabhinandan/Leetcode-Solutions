class Solution {
    public int maxMoves(int[][] grid) {
        int n = grid.length;      // Number of rows
        int m = grid[0].length;   // Number of columns
        int[][] dp = new int[n][m];
        int maxMoves = 0;

        // Initialize dp array: dp[i][0] = 0 for all rows i
        for (int i = 0; i < n; i++) {
            dp[i][0] = 0;
        }

        // Fill the dp table
        for (int j = 1; j < m; j++) {              // For each column starting from the second
            for (int i = 0; i < n; i++) {          // For each row
                dp[i][j] = -1;                     // Initialize dp[i][j] to -1 (unreachable)
                // Check the three possible previous positions
                for (int dir = -1; dir <= 1; dir++) {
                    int prevRow = i + dir;
                    int prevCol = j - 1;
                    // Check if previous position is within bounds
                    if (prevRow >= 0 && prevRow < n) {
                        // Check if the move is valid
                        if (grid[prevRow][prevCol] < grid[i][j] && dp[prevRow][prevCol] != -1) {
                            dp[i][j] = Math.max(dp[i][j], dp[prevRow][prevCol] + 1);
                        }
                    }
                }
                maxMoves = Math.max(maxMoves, dp[i][j]);  // Update the maximum number of moves
            }
        }

        return maxMoves < 0 ? 0 : maxMoves;
    }
}
