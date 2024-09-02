class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        int [][] reshape=new int [r][c]; 
        int n=mat.length; int m=mat[0].length; 
        int [] original=new int[n*m]; 
        int idx=0;
          if (n * m != r * c) {
            return mat;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                original[idx]=mat[i][j];
                idx++;
            }
        }
        idx=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                reshape[i][j]=original[idx];
                idx++;
            }
        }
        return reshape;
    }
}