class Solution {
    public long maximumSubarraySum(int[] nums, int k) {
        Map<Integer,Integer>mp=new HashMap<>();
        int j=0; long sum=0; long maxi=0;  
        for(int i=0;i<nums.length;i++)
        {
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1); 
            sum+=nums[i];
            while(i-j+1==k)
            {
                if(mp.size()==k)
                {
                    maxi=Math.max(maxi,sum);
                }
                mp.put(nums[j],mp.getOrDefault(nums[j],0)-1); 
                if(mp.get(nums[j])==0)
                {
                    mp.remove(nums[j]);
                }
                sum-=nums[j];
                j++;
            }
        }
        return maxi;
    }
}