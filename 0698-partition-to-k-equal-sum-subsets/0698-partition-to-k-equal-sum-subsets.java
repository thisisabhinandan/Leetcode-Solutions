class Solution {
    public boolean canPartitionKSubsets(int[] nums, int k) {
        boolean [] used=new boolean[nums.length];
        int sum=0; 
        for(int i=0;i<nums.length;i++)
        {
            sum+=nums[i];
        }
        if(sum%k!=0) return false; 
        return backtrack(nums,used,sum/k,k,0,0);
    }
    public boolean backtrack(int [] nums, boolean [] used, int req, int k ,int idx, int curr)
    {
        if(k==1) return true; 
        if(curr==req)
        {
            return backtrack(nums,used,req,k-1,0,0);
        }
        for(int i=idx;i<nums.length;i++)
        {
            if(!used[i] && curr+nums[i]<=req)
            {
                used[i]=true; 
                if(backtrack(nums,used,req,k,i+1,curr+nums[i])){
                    return true;
                }
                used[i]=false;
            }
        }
        return false;
    }
}