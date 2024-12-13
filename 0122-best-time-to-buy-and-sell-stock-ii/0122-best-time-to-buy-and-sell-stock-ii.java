class Solution {
    public int maxProfit(int[] prices) {
        int mini=Integer.MAX_VALUE; int ans=0; 
        for(int i=0;i<prices.length;i++)
        {
            mini=Math.min(mini,prices[i]);
            if(prices[i]-mini>0)
            {
                ans+=prices[i]-mini;
                mini=prices[i];
            }
        }
        return ans;
    }
}