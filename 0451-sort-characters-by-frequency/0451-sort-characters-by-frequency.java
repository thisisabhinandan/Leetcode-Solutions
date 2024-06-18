class Solution {
    public String frequencySort(String s) {
        Map<Character,Integer> mp=new HashMap<>();
        StringBuilder ans=new StringBuilder(); 
        for(int i=0;i<s.length();i++)
        {
            char c=s.charAt(i);
            mp.put(c,mp.getOrDefault(c,0)+1);
        }
        
        PriorityQueue<Map.Entry<Character,Integer>> pq=new PriorityQueue<>(
        (a,b) -> b.getValue()-a.getValue()
        );
        
        pq.addAll(mp.entrySet());
        while(!pq.isEmpty())
        {
            Map.Entry<Character,Integer> entry=pq.poll();
            char c=entry.getKey();
            int  v=entry.getValue();
            for(int i=0;i<v;i++)
            {
                ans.append(c);
            }
        }
        
        return ans.toString();
}
}