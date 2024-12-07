class Solution {
    public int minimumSize(int[] nums, int maxOperations) {
        int l=1; int r=1000000001; int ans=1000000001;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(help(nums,maxOperations,mid))
            {
                ans=Math.min(ans,mid);
                r=mid-1;
            }
            else{
                l=mid+1; 
            }
        }
        return ans;
    }
    public boolean help(int[] nums, int maxOperations,int mid)
    {
        int tot=0; 
        for(int i=0;i<nums.length;i++)
        {
            tot+=(nums[i]-1)/mid;
            if(tot>maxOperations)
            {
                return false;
            }
        }
        return true;
    }
}