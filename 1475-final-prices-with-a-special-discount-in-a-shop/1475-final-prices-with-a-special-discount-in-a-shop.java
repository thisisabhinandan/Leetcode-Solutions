class Solution {
    public int[] finalPrices(int[] prices) {
        int [] dis =new int[prices.length-1];
        for(int i=0;i<prices.length-1;i++)
        {
            int start=prices[i]; 
            {
                for(int j=i+1;j<prices.length;j++)
                {
                    if(prices[j]<=start)
                    {
                        dis[i]=prices[j];
                        break;
                    }
                }
            }
        }
        for(int i=0;i<prices.length-1;i++)
        {
            prices[i]=prices[i]-dis[i];
        }
        return prices;
    }
}