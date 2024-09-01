class Solution {
    public String stringHash(String s, int k) {
        String ans=""; 
        for(int i=0;i<s.length();i+=k)
        {
            String str=s.substring(i,i+k); 
            int num=0; 
            for(int j=0;j<str.length();j++)
            {
                char ch=str.charAt(j); 
                num+=ch-'a';
            }
            num=num%26; 
            ans+=(char)('a'+num); 
        }
        return ans;
    }
}