class Solution {
    public int minStoneSum(int[] piles, int k) {
        PriorityQueue<Integer> pq=new PriorityQueue<>(Collections.reverseOrder()); 
        int ans=0;
        for(int num:piles)
        {
            pq.add(num); 
        }
        while(k-->0)
        {
            int num=pq.poll();
            pq.add(num-(int)Math.floor(num/2));
        }
        while(!pq.isEmpty())
        {
            ans+=pq.poll();
        }
        return ans;
    }
}