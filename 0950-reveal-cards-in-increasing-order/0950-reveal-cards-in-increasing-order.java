class Solution {
    public int[] deckRevealedIncreasing(int[] deck) {
        int n=deck.length; int ans[]=new int[n];
        Queue<Integer> queue=new LinkedList<>();
        for(int i=0;i<n;i++)
        {
            queue.add(i);
        }
        Arrays.sort(deck);
        for(int i=0;i<n;i++)
        {
            ans[queue.poll()]=deck[i];
            queue.add(queue.poll());
        }
        return ans;
    }
}