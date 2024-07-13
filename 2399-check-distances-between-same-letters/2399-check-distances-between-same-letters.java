class Solution {
    public boolean checkDistances(String s, int[] distance) {
        HashMap<Character,Integer>mp=new HashMap<>(); 
        Boolean ans=false;
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i); 
            if(mp.containsKey(ch))
            {
                int dist=i-mp.get(ch)-1; 
                if(dist==distance[ch-'a'])
                {
                    ans=true; 
                }
                else
                {
                    return false;
                }
            }
            mp.put(ch,i); 
        }
        return ans; 
    }
}