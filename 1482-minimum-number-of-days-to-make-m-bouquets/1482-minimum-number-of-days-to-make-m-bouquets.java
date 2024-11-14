class Solution {
    public int minDays(int[] bloomDay, int m, int k) {
        int l=1; int r=1000000000;
        int ans=Integer.MAX_VALUE; 
        while(l<=r)
        {
            int mid=l+(r-l)/2; 
            if(canmake(bloomDay,m,k,mid)>=m)
            {
                ans=Math.min(ans,mid);
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if (ans==Integer.MAX_VALUE) return -1;
        else return ans;
    }
    public int canmake(int [] bloomDay, int m, int k, int mid)
    {
        int cnt=0; int tot=0;
        for(int i=0;i<bloomDay.length;i++)
        {
            if(bloomDay[i]<=mid)
            {
                cnt++;
                if(cnt==k)
                {
                    tot++;
                    cnt=0;
                }
            }
            else{
                cnt=0;
            }
        }
        return tot;
    }
}