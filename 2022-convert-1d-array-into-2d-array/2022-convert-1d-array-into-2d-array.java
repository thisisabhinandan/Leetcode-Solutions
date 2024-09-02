class Solution {
    public int[][] construct2DArray(int[] original, int m, int n) {
        if(original.length!=m*n) return new int [0][0];
        int len=0; 
        int [][] ans=new int [m][n]; 
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans[i][j]=original[len];
                len++;
            }
        }
        return ans;
    }
}