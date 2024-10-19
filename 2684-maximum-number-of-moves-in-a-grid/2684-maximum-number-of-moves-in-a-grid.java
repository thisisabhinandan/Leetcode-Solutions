class Solution {
    public int maxMoves(int[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        int[][] dp = new int[n][m];
        int maxMoves = 0;

        // Initialize the first column of dp to 1, since we can start from any of these cells
        for (int i = 0; i < n; i++) {
            dp[i][0] = 1;
        }

        // Fill the DP table for each column
        for (int j = 1; j < m; j++) {
            for (int i = 0; i < n; i++) {
                int maxPrevious = 0;

                // Top-right move
                if (i > 0 && grid[i][j] > grid[i - 1][j - 1]) {
                    maxPrevious = Math.max(maxPrevious, dp[i - 1][j - 1]);
                }

                // Direct right move
                if (grid[i][j] > grid[i][j - 1]) {
                    maxPrevious = Math.max(maxPrevious, dp[i][j - 1]);
                }

                // Bottom-right move
                if (i < n - 1 && grid[i][j] > grid[i + 1][j - 1]) {
                    maxPrevious = Math.max(maxPrevious, dp[i + 1][j - 1]);
                }

                // Update dp[i][j] if there is a valid move from any of the previous cells
                if (maxPrevious > 0) {
                    dp[i][j] = maxPrevious + 1;
                    maxMoves = Math.max(maxMoves, dp[i][j]);
                }
            }
        }

        if(maxMoves==0) return 0;
        else return maxMoves - 1; // Subtract 1 to account for the starting point
    }
}
