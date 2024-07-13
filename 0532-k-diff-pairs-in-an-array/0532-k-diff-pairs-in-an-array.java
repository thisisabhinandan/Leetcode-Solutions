class Solution {
    public int findPairs(int[] nums, int k) {
        Map<Integer,Integer> mp=new HashMap<>(); int cnt=0; 
        for(int i:nums)
        {
            mp.put(i,mp.getOrDefault(i,0)+1);
        }
        for(Map.Entry<Integer,Integer> entry:mp.entrySet())
        {
            if(mp.containsKey(k+entry.getKey())&&k!=0 || entry.getValue()>1 &&k==0)
            {
                cnt++;
            }
        }
        return cnt; 
    }
}