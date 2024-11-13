class Solution {
    public int findContentChildren(int[] g, int[] s) {
        TreeMap<Integer,Integer> mp=new TreeMap<>(); int cnt=0;
        for(int i=0;i<s.length;i++)
        {
            mp.put(s[i],mp.getOrDefault(s[i],0)+1);
        }
        for(int i=0;i<g.length;i++)
        {
            Integer child=mp.ceilingKey(g[i]);
            if(child!=null)
            {
                cnt++;
                mp.put(child,mp.getOrDefault(child,0)-1);
                if(mp.get(child)==0)
                {
                    mp.remove(child);
                }
            }
        }
        return cnt;
    }
}