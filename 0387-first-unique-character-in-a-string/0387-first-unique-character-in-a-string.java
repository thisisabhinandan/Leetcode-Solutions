class Solution {
    public int firstUniqChar(String s) {
       LinkedHashMap<Character,Integer> mp = new LinkedHashMap<>(); 
        for(int i=0;i<s.length();i++)
        {
            mp.put(s.charAt(i),mp.getOrDefault(s.charAt(i),0)+1); 
        }
        for(Map.Entry<Character,Integer> entry:mp.entrySet())
        {
            if(entry.getValue()==1)
            {
                char ch=entry.getKey();
                return s.indexOf(ch);
            }
        }
        return -1;
    }
}