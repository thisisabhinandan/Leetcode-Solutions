class Solution {
    public long countSubarrays(int[] nums, int k) {
        int maxi=0; int n=nums.length; int j=0; long ans=0; long cnt=0;
        for(int i=0;i<n;i++)
        {
            maxi=Math.max(maxi,nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==maxi)
            {
                cnt++;
            }
            while(cnt>=k)
            {
                ans+=n-i;
                if(nums[j]==maxi)
                {
                    cnt--;
                }
                j++;
            }
        }
        return ans;
    }
}