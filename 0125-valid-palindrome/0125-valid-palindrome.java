class Solution {
    public boolean isPalindrome(String s) {
        String str="";
        for(char ch:s.toCharArray())
        {
            if(Character.isUpperCase(ch))
            {
                str+=Character.toLowerCase(ch);
            }
            else if(Character.isLowerCase(ch))
            {
                str+=ch;
            }
            else if(Character.isDigit(ch)){
                str+=ch;
            }
            else continue;
        }
        int l=0; int r=str.length()-1;
        while(l<=r)
        {
            if(str.charAt(l)!=str.charAt(r))
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
}