class Solution {
    public long maximumSubarraySum(int[] nums, int k) {
        Set<Integer> st=new HashSet<>();
        int j=0; long sum=0; long maxi=0;  
        for(int i=0;i<nums.length;i++)
        {
            while(st.contains(nums[i]))
            {
                st.remove(nums[j]);
                sum-=nums[j];
                j++;
            }
            sum+=nums[i];
            st.add(nums[i]);
            while(i-j+1==k)
            {
                maxi=Math.max(maxi,sum);
                st.remove(nums[j]);
                sum-=nums[j];
                j++;
            }
        }
        return maxi;
    }
}