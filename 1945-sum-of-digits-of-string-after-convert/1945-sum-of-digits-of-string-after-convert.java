class Solution {
    public int getLucky(String s, int k) { 
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<s.length();i++)
        {
            sb.append(s.charAt(i)-'a'+1); 
        } int ans=0;
        while(k-->0)
        {
            ans=0; 
            for(int i=0;i<sb.length();i++)
            {
                ans+=sb.charAt(i)-'0';
            }
            sb=new StringBuilder(String.valueOf(ans)); 
        }
        return ans;
    }
}