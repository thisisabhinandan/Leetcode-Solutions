class Solution {
    public List<Integer> findLonely(int[] nums) {
        List<Integer> ans=new ArrayList<>(); 
        HashMap<Integer,Integer> mp=new HashMap<>();
        for(int i=0;i<nums.length;i++)
        {
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
        }
        for(Map.Entry<Integer,Integer>entry:mp.entrySet())
        {
            if(entry.getValue()==1 && !mp.containsKey(entry.getKey()-1) && !mp.containsKey(entry.getKey()+1))
            {
                ans.add(entry.getKey());
            }
        }
        return ans;
    }
}