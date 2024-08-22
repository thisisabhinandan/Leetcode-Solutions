class Solution {
    public int maxProfit(int[] prices) {
        int buyprice=900001;
        int maxi=0;
        for(int i=0;i<prices.length;i++)
        {
            buyprice=Math.min(buyprice,prices[i]);
            maxi=Math.max(maxi,-buyprice+prices[i]);
        }
        return maxi;
    }
}