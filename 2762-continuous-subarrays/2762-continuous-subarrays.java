class Solution {
    public long continuousSubarrays(int[] nums) {
        TreeMap<Integer,Integer> mp=new TreeMap<>();
        long cnt=0; int j=0;
        for(int i=0;i<nums.length;i++)
        {
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
            while(mp.lastKey()-mp.firstKey()>2)
            {
                mp.put(nums[j],mp.getOrDefault(nums[j],0)-1);
                if(mp.get(nums[j])==0)
                {
                    mp.remove(nums[j]);
                }
                j++;
            }
            cnt+=i-j+1;
        }
        return cnt;
    }
}