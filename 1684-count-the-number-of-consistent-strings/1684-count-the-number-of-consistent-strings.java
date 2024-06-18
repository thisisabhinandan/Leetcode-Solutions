class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
       int cnt=0; Set<Character> set=new HashSet<>(); 
        for(int i=0;i<allowed.length();i++)
        {
            set.add(allowed.charAt(i));
        }
        for(int i=0;i<words.length;i++)
        {
            String s=words[i];  boolean b=true; 
            for(int j=0;j<s.length();j++)
            {
               if(!set.contains(s.charAt(j)))
               {
                   b=false; 
               }
            }
            if(b==true) cnt++;
        }
        return cnt; 
    }
}