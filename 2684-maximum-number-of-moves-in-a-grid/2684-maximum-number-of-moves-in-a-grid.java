class Solution {
    public int maxMoves(int[][] grid) {
        int n = grid.length;  // Number of rows
        int m = grid[0].length;  // Number of columns
        int[][] dp = new int[n][m];  // DP array to store the max number of moves from each cell

        // Fill the dp array for each cell in the first column
        for (int i = 0; i < n; i++) {
            dp[i][0] = 1;  // We can start from any cell in the first column
        }

        // Iterate through each column starting from the first one to fill the DP table
        for (int j = 1; j < m; j++) {  // Iterate through columns from left to right
            for (int i = 0; i < n; i++) {  // Iterate through rows for each column
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
                }
            }
        }

        // Find the maximum value in the dp array
        int maxMoves = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                maxMoves = Math.max(maxMoves, dp[i][j]);
            }
        }

        return maxMoves - 1;  // Subtract 1 to account for initial move
    }
}
