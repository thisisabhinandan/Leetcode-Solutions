class Solution {
    public boolean checkInclusion(String s1, String s2) {
        HashMap<Character,Integer> mp1=new HashMap<>();
        for(int i=0;i<s1.length();i++)
        {
            char ch=s1.charAt(i);
            mp1.put(ch,mp1.getOrDefault(ch,0)+1);
        } int j=0; 
        for(int i=0;i<s2.length();i++)
        {
            char ch=s2.charAt(i);
            mp1.put(ch,mp1.getOrDefault(ch,0)-1);
            if(i-j+1==s1.length())
            {
                boolean flag=true;
                for(int k=0;k<s1.length();k++)
                {
                    if(mp1.getOrDefault(s1.charAt(k),0)!=0)
                    {
                        flag=false;
                        break;
                    }
                }
            
            if(flag==true) return true;
            char ch1=s2.charAt(j);
            mp1.put(ch1,mp1.getOrDefault(ch1,0)+1);
            j++;
            }
        }
        return false;
    }
}