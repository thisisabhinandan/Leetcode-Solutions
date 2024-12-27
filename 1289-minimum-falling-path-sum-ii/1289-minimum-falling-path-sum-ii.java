class Solution {
    public int minFallingPathSum(int[][] grid) {
        int n = grid.length;
        int prevMin = 0, prevSecondMin = 0, prevMinIndex = -1;

        for (int i = 0; i < n; i++) {
            int currMin = Integer.MAX_VALUE;
            int currSecondMin = Integer.MAX_VALUE;
            int currMinIndex = -1;

            // Traverse the current row
            for (int j = 0; j < n; j++) {
                int currVal = grid[i][j];

                // Add the smallest valid value from the previous row
                if (j != prevMinIndex) {
                    currVal += prevMin;
                } else {
                    currVal += prevSecondMin;
                }

                // Update the minimums for the current row
                if (currVal < currMin) {
                    currSecondMin = currMin;
                    currMin = currVal;
                    currMinIndex = j;
                } else if (currVal < currSecondMin) {
                    currSecondMin = currVal;
                }
            }

            // Update the values for the next row
            prevMin = currMin;
            prevSecondMin = currSecondMin;
            prevMinIndex = currMinIndex;
        }

        // The final minimum value after processing all rows
        return prevMin;
    }
}
