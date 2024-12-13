class Solution {
    public String stoneGameIII(int[] stoneValue) {
        int n=stoneValue.length;
        int [] dp=new int [n+1];
        dp[n]=0;
        for(int i=n-1;i>=0;i--)
        {
            int pick=0;
            dp[i]=Integer.MIN_VALUE;
            for(int j=0;j<3;j++)
            {
                if(i+j<n)
                {
                    pick+=stoneValue[i+j];
                    dp[i]=Math.max(dp[i],pick-dp[i+j+1]);
                }
            }
        }
        if(dp[0]>0) return "Alice";
        else if(dp[0]<0) return "Bob";
        else return "Tie";
    }
}