class Solution {
    public int maxProfit(int[] prices, int fee) {
       int ans=0; int mini=Integer.MAX_VALUE;
        for(int i=0;i<prices.length;i++)
        {
            mini=Math.min(mini,prices[i]);
            if(prices[i]-mini-fee>0)
            {
                ans+=prices[i]-mini-fee;
                mini=prices[i]-fee;
            }
        }
        return ans;
    }
}