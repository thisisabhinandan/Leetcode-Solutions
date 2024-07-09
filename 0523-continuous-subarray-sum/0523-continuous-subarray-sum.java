class Solution {
    public boolean checkSubarraySum(int[] nums, int k) {
        HashMap<Integer,Integer>mp=new HashMap<>(); int modsum=0; mp.put(0,-1);
        for(int i=0;i<nums.length;i++)
        {
            modsum=(modsum+nums[i])%k;
            if(mp.containsKey(modsum))
            {
                if(i - mp.get(modsum)>1) return true;
            }
            else mp.put(modsum,i);
        }
        return false; 
    }
   
}