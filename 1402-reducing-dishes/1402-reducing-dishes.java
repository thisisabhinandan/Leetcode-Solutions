class Solution {
    int [][] dp=new int [1001][1001];
    public int maxSatisfaction(int[] satisfaction) {
        Arrays.sort(satisfaction);
        for(int i=0;i<1001;i++)
        {
            for(int j=0;j<1001;j++)
            {
                dp[i][j]=Integer.MIN_VALUE;
            }
        }
        int ans=solve(satisfaction,0,1);
        return ans;
    }
    public int solve(int[] satisfaction,int idx,int time)
    {
        if(idx==satisfaction.length) return 0;
        if(dp[idx][time]!=Integer.MIN_VALUE) return dp[idx][time];
        int pick=satisfaction[idx]*time+solve(satisfaction,idx+1,time+1);
        int notpick=solve(satisfaction,idx+1,time);    
        dp[idx][time]=Math.max(pick,notpick);
        return dp[idx][time];
    }
}