class Solution {
    public String shiftingLetters(String s, int[] shifts) {
        int n=shifts.length; StringBuilder sb=new StringBuilder();
        long [] suff=new long [n];
        suff[n-1]=shifts[n-1]; 
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=suff[i+1]+shifts[i]; 
        }
        for(int i=0;i<s.length();i++)
        {
            long start=s.charAt(i)-'a';
            long to=(start+suff[i])%26;
            sb.append((char)(to+'a'));
        }
        return sb.toString();
    }
}