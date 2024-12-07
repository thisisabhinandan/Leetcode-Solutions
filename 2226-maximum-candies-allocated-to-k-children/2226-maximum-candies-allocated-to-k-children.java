class Solution {
    public int maximumCandies(int[] candies, long k) {
        int ans=0; 
        int l=1; int r=100000001;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(help(candies,k,mid))
            {
                ans=mid;
                l=mid+1;
            }
            else{
               r=mid-1;
            }
        }
        return ans;
    }
    public boolean help(int [] candies, long k, int mid)
    {
        long tot=0;
        for(int i=0;i<candies.length;i++)
        {
            tot+=candies[i]/mid;
        }
        return tot>=k;
    }
}