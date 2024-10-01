class Solution {
    public int countPrefixes(String[] words, String s) {
        int cnt=0;
        for(int i=0;i<words.length;i++)
        {
            String str=words[i];
            boolean valid=true; 
            if(str.length()>s.length()) valid=false;
            else{
                for(int j=0;j<str.length();j++)
            {
                if(str.charAt(j)!=s.charAt(j))
                {
                    valid=false;
                    break;
                }
            }
            }
            
            if(valid) cnt++;
        }
        return cnt;
    }
}