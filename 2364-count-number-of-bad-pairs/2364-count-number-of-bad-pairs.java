class Solution {
    public long countBadPairs(int[] nums) {
        Map<Integer,Integer> mp=new HashMap<>();
        long cnt=0; 
        int n=nums.length;
        for(int i=0;i<n;i++)
        {
            int diff=nums[i]-i; 
            if(mp.containsKey(diff))
            {
                cnt+=mp.get(diff);
            }
            mp.put(diff,mp.getOrDefault(diff,0)+1);
        }
        return (long) n*(n-1)/2 - cnt;
    }
}