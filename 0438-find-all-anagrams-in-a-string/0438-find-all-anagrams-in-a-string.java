class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        List<Integer> ans=new ArrayList<>(); int j=0;
        HashMap<Character,Integer> mp=new HashMap<>();
        for(char ch:p.toCharArray())
        {
            mp.put(ch,mp.getOrDefault(ch,0)+1);
        }
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            mp.put(ch,mp.getOrDefault(ch,0)-1); 
            if(i-j+1==p.length())
            {
                boolean valid=true;
                for(int k=0;k<p.length();k++)
                {
                    char ch1=p.charAt(k);
                    if(mp.getOrDefault(ch1,0)!=0)
                    {
                        valid=false;
                        break;
                    }
                }
                if(valid){
                    ans.add(j);
                }
                char ch2=s.charAt(j);
                mp.put(ch2,mp.getOrDefault(ch2,0)+1); 
                j++;
            }
        }
        return ans;
    }
}