class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
        HashSet<Character> st=new HashSet<>();
         for(int i=0;i<allowed.length();i++)
         {
             st.add(allowed.charAt(i));
         } int cnt=0;
        for(int i=0;i<words.length;i++)
        {
            String s=words[i]; 
            boolean valid=true; 
            for(int j=0;j<s.length();j++)
            {
                if(!st.contains(s.charAt(j)))
                {
                    valid=false; 
                }
            }
            if(valid) cnt++;
        }
        return cnt; 
    }
}