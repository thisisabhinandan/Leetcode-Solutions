class Solution {
    public long[] findPrefixScore(int[] nums) {
        int n=nums.length;
        long [] premax=new long [n];
        premax[0]=nums[0];
        for(int i=1;i<n;i++)
        {
           premax[i]=Math.max(premax[i-1],nums[i]);
        }
        long [] presum=new long [n];
        for(int i=0;i<n;i++)
        {
            presum[i]=(long) nums[i]+premax[i];
        }
        long [] ans=new long [n];
        ans[0]=presum[0];
        for(int i=1;i<n;i++)
        {
            ans[i]=ans[i-1]+presum[i];
        }
        return ans;
    }
}