class Solution {
    public int findKthLargest(int[] nums, int k) {
        int ans=0; 
        PriorityQueue<Integer> pq=new PriorityQueue<>(Collections.reverseOrder()); 
        for(int i=0;i<nums.length;i++)
        {
            pq.add(nums[i]);
        }
        for(int i=0;i<k-1;i++)
        {
            pq.poll();
        }
        return pq.peek();
    }
}