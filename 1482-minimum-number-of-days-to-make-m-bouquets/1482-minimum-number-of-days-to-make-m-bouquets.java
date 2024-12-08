class Solution {
    public int minDays(int[] bloomDay, int m, int k) {
        if(m*k>bloomDay.length) return -1;  int l=1; int r=0; int ans=-1;
        for(int i=0;i<bloomDay.length;i++) 
        {
            r=Math.max(r,bloomDay[i]);
        }
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(check(bloomDay,m,k,mid))
            {
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
    public boolean check(int[] bloomDay, int m, int k, int mid)
    {
        int cnt=0; int flowers=0;
        for(int i=0;i<bloomDay.length;i++)
        {
            if(bloomDay[i]<=mid) 
            {
                cnt++;
            if(cnt==k)
            {
                flowers++;
                cnt=0;
            }
                
            }
            else{
                cnt=0;
            }
                
        }
        return flowers>=m;
    }
}