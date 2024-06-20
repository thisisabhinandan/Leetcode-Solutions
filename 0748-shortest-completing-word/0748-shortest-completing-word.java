class Solution {
    public String shortestCompletingWord(String licensePlate, String[] words) {
        Map<Character,Integer> mp=new HashMap<>();  
        String ans=""; int len=16; String str=licensePlate.toLowerCase();
        
        for(int i=0;i<str.length();i++)
        {
            char c=str.charAt(i);
            if(c>='a'&&c<='z') mp.put(c,mp.getOrDefault(c,0)+1);
        } 
         
        for(int i=0;i<words.length;i++)
        {
            String s=words[i]; 
            boolean b=true; 
            Map<Character,Integer> mp1=new HashMap<>();
            for(int j=0;j<s.length();j++)
            {
            char c=s.charAt(j);
            mp1.put(c,mp1.getOrDefault(c,0)+1);
            }
            for(char c:mp.keySet())
            {
                if(!mp1.containsKey(c)||mp.get(c)>mp1.get(c))
                {
                    b=false;
                    break;
                }
            }
            if(b)
            {
                if(len>s.length())
                {
                    ans=s;
                    len=s.length();
                }
            }
        }
        return ans;
    }
}