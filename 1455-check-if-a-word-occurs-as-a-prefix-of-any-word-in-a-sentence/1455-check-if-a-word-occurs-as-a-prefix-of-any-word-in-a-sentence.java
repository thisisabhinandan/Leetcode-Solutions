class Solution {
    public int isPrefixOfWord(String sentence, String searchWord) {
        String [] str=sentence.split(" ");
        for(int i=0;i<str.length;i++)
        {
            String s=str[i]; 
            if(s.length()>=searchWord.length())
            {
                boolean valid=true;
                for(int j=0;j<searchWord.length();j++)
                {
                    if(s.charAt(j)!=searchWord.charAt(j))
                    {
                        valid=false;
                    }
                }
                if(valid) return i+1;
            }
        }
        return -1;
    }
}