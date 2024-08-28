class Solution {
    public int majorityElement(int[] nums) {
        int maxi=nums[0]; int cnt=1;
        for(int i=1;i<nums.length;i++)
        {
            if(cnt==0)
            {
                maxi=nums[i];
                cnt=1;
            }
            else if(maxi==nums[i]) cnt++;
            else cnt--; 
        }
        return maxi;
    }
};