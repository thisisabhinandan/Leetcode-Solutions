class Solution {
    public int minimizedMaximum(int n, int[] quantities) {
        int l=1; int r=1000001; int ans=0; 
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(candistribute(n,quantities,m))
            {
                ans=m;
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;
    }
    public boolean candistribute(int n, int []qualities, int m)
    {
        int tot=0;
        for(int i=0;i<qualities.length;i++)
        {
            tot+=(qualities[i]+m-1)/m;
             if(tot>n)
             {
                 return false;
             }
        }
       return tot<=n;
    }
}