class Solution {
    public boolean canMakeSubsequence(String str1, String str2) {
        int len=str2.length(); int j=0; 
        for(int i=0;i<str1.length();i++)
        {
            if(j<str2.length()&&(str1.charAt(i)==str2.charAt(j) || (str1.charAt(i)-'a'+1)%26==str2.charAt(j)-'a'))
               {
                   j++;
               }
        }
        return j==len; 
    }
}