class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer,Integer> mp=new HashMap<>();
        int[] result=new int[k];
        for(int i=0;i<nums.length;i++)
        {
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
        }
        PriorityQueue<Map.Entry<Integer,Integer>>pq=new PriorityQueue<>(
        (a,b)-> b.getValue()-a.getValue()); 
        pq.addAll(mp.entrySet());
        for(int i=0;i<k;i++)
        {
            result[i]=pq.poll().getKey();
        }
        return result;
    }
}