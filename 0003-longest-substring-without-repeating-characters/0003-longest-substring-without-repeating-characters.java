class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character,Integer> mp=new HashMap<>(); 
        int j=0; int ans=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i); 
            mp.put(ch,mp.getOrDefault(ch,0)+1); 
            while(mp.get(ch)>1)
            {
                mp.put(s.charAt(j),mp.get(s.charAt(j))-1);
                j++;
            }
            ans=Math.max(ans,i-j+1);
        }
        return ans;
    }
}