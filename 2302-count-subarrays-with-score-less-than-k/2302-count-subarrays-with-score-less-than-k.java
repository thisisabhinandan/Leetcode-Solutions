class Solution {
    public long countSubarrays(int[] nums, long k) {
        long cnt=0; int j=0; long sum=0;
        for(int i=0;i<nums.length;i++)
        {
            sum+=nums[i];
            while(sum*(i-j+1)>=k)
            {
                sum-=nums[j];
                j++;
            }
             cnt+=i-j+1;
        }
        return cnt;
    }
}