class Solution {
    public long minOperationsToMakeMedianK(int[] nums, int k) {
        Arrays.sort(nums);
        long ans=0; int n=nums.length;
        for(int i=0;i<=n/2;i++)
        {
            ans+=Math.max(0,nums[i]-k);
        }
        for(int i=n/2;i<n;i++)
        {
            ans+=Math.max(0,k-nums[i]);
        }
        return ans;
    }
}