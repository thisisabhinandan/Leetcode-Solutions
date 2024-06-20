class Solution {
    public int findKthLargest(int[] nums, int k) {
        int ans=0;
        PriorityQueue<Integer> pq=new PriorityQueue<>(
        (a,b) -> Integer.compare(b,a)); 
        for(int i=0;i<nums.length;i++)
        {
            pq.add(nums[i]);
        }
       while(!pq.isEmpty()&&k!=0)
       {
           ans=pq.poll();
           k--;
       }
        return ans;
    }
}