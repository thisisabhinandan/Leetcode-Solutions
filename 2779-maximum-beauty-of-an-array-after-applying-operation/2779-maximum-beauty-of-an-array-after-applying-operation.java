class Solution {
    public int maximumBeauty(int[] nums, int k) {
        int maxi=0; int ans=0; int sum=0;
        for(int i=0;i<nums.length;i++) {
            maxi=Math.max(maxi,nums[i]);
        }
        int freq[]=new int[maxi+k+2]; int cnt=0; 
        for(int i=0;i<nums.length;i++)
        {
            freq[nums[i]+k+1]--;
            freq[Math.max(nums[i]-k,0)]++;
        }
        for(int i=0;i<freq.length;i++)
        {
            sum+=freq[i];
            ans=Math.max(ans,sum);
        }
        return ans;
    }
}