class Solution {
    public int findMaxK(int[] nums) {
        HashSet<Integer> st=new HashSet<>(); 
        int ans=-1002; 
        for(int i=0;i<nums.length;i++)
        {
            if(st.contains(-1*nums[i]))
            {
                ans=Math.max(ans,Math.abs(nums[i])); 
            }
            st.add(nums[i]);
        }
        if(ans==-1002) return -1; 
        else return ans; 
    }
}