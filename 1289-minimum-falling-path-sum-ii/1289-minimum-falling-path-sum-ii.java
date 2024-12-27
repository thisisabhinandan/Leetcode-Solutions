class Solution {
    public int minFallingPathSum(int[][] grid) {
        int n=grid.length; 
        int prevmin=0;
        int prevsmin=0;
        int prevminidx=-1;
        for(int i=0;i<n;i++)
        {
            int currmin=Integer.MAX_VALUE;
            int currsmin=Integer.MAX_VALUE;
            int currminidx=-1;
            for(int j=0;j<n;j++)
            {
                int currval=grid[i][j];
                if(j!=prevminidx)
                {
                    currval+=prevmin;
                }
                else{
                    currval+=prevsmin;
                }
                if(currval<currmin)
                {
                    currsmin=currmin;
                    currmin=currval;
                    currminidx=j;
                }
                else if(currval<currsmin)
                {
                    currsmin=currval;
                }
            }
            prevmin=currmin;
            prevsmin=currsmin;
            prevminidx=currminidx;
        }
        return prevmin;
    }
}