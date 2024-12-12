class Solution {
    public long pickGifts(int[] gifts, int k) {
        PriorityQueue<Integer> pq =new PriorityQueue<>(Collections.reverseOrder());
        for(int i=0;i<gifts.length;i++)
        {
            pq.add(gifts[i]);
        } long ans=0;
        while(k-->0)
        {
            int peek=pq.poll();
            peek=(int) Math.sqrt(peek);
            peek=(int) Math.floor(peek);
            pq.add(peek);
        }
        while(!pq.isEmpty())
        {
            ans+=pq.poll();
        }
        return ans;
    }
}