class Solution {
    public int maximumLength(int[] nums, int K) {
        int n=nums.length; 
        int [][] dp=new int [n][K+1];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=K;j++)
            {
              dp[i][j]=1;    
            }
        } 
        int ans=1;
        for(int k=0;k<=K;k++)
        {
            for(int i=1;i<n;i++)
            {
                for(int j=0;j<i;j++)
                {
                    if(nums[j]!=nums[i])
                    {
                        if(k>0)
                        {
                            dp[i][k]=Math.max(dp[i][k],dp[j][k-1]+1);
                        }
                    }
                    else
                    {
                        dp[i][k]=Math.max(dp[i][k],dp[j][k]+1);
                    }
                }
                ans=Math.max(ans,dp[i][k]);
            }
        }
        return ans;
    }
}
