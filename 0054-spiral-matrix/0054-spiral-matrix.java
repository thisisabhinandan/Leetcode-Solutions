class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> ans=new ArrayList<>();
        int n=matrix.length-1; int m=matrix[0].length-1;
        int direction=1; int top=0; int bottom=n;
        int left=0; int right=m;
        while(top<=bottom && left<=right)
        {
            if(direction==1)
            {
                for(int i=left;i<=right;i++)
            {
                ans.add(matrix[top][i]);
                
            }
                top++;
                direction=2;
            }
            else if(direction==2)
            {
                for(int i=top;i<=bottom;i++)
                {
                    ans.add(matrix[i][right]);
                }
                right--;
                direction=3;
            }
            else if(direction==3)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.add(matrix[bottom][i]);
                }
                bottom--;
                direction=4;
            }
            else{
                  for(int i=bottom;i>=top;i--)
                {
                    ans.add(matrix[i][left]);
                }
                left++;
                direction=1; 
            }
        }
        return ans;
    }
}