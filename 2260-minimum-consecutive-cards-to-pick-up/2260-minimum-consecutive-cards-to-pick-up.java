class Solution {
    public int minimumCardPickup(int[] nums) {
        HashMap<Integer,Integer> mp=new HashMap<>();
        int ans=1000001;
        for(int i=0;i<nums.length;i++)
        {
            if(mp.containsKey(nums[i]))
            {
                ans=Math.min(ans,i-mp.get(nums[i])+1);
            }
            mp.put(nums[i],i); 
        }
        if(ans==1000001) return -1;
        else return ans;
    }
}