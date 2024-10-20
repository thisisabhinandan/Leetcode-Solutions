class Solution {
    public int numberOfSubstrings(String s, int k) {
        HashMap<Character,Integer> mp=new HashMap<>(); int j=0; int ans=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            mp.put(ch,mp.getOrDefault(ch,0)+1); 
            while(mp.get(ch)>=k)
            {
                ans+=s.length()-i;
                char last=s.charAt(j);
                mp.put(last,mp.getOrDefault(last,0)-1);
                j++;
            }
        }
        return ans;
    }
}