class Solution {
    public int findMaxK(int[] nums) {
        HashMap<Integer,Integer> mp=new HashMap<>();
        int largest=Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++)
        {
            if(mp.containsKey(-1*nums[i]))
            {
               largest=Math.max(largest,Math.abs(nums[i]));
            }
            mp.put(nums[i],i);
        }
        if(largest==Integer.MIN_VALUE) return -1;
        else return largest; 
    }
}