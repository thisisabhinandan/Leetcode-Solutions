class Solution {
    public int mincostTickets(int[] days, int[] cost) {
        int lastday=days[days.length-1];
        int [] dp=new int [lastday+1]; int idx=0;
        Set<Integer> st = new HashSet<>();
        for(int i=0;i<days.length;i++) st.add(days[i]);
        int oneday=0; int sevenday=0; int thirtyday=0;
        for(int i=1;i<=lastday;i++)
        {
            if(!st.contains(i))
            {
                dp[i]=dp[i-1];
            }
            else{
                oneday=cost[0]+dp[i-1];
                if(i>=7)
                {
                    sevenday=dp[i-7]+cost[1];
                }
                else{
                    sevenday=cost[1];
                }
                if(i>=30)
                {
                    thirtyday=dp[i-30]+cost[2];
                }
                else{
                    thirtyday=cost[2];
                }
                dp[i]=Math.min(oneday,Math.min(sevenday,thirtyday));
            }
        }
        return dp[lastday];
    }
}