class Solution {
    public boolean isMonotonic(int[] nums) {
        int i=0; int j=0; 
        while(i+1<nums.length && nums[i]<=nums[i+1])
        {
            i++;
        }
        while(j+1<nums.length && nums[j]>=nums[j+1])
        {
            j++;
        }
        return i==nums.length-1 || j==nums.length-1;
    }
}