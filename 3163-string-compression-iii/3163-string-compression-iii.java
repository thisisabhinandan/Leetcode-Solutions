class Solution {
    public String compressedString(String word) {
        StringBuilder sb=new StringBuilder(); 
        int i=0; 
        while(i<word.length())
        {
            int cnt=1; 
            char start=word.charAt(i);
            while(i+1<word.length() && word.charAt(i)==word.charAt(i+1) && cnt<9)
            {
                cnt++;
                i++;
            }
            sb.append(cnt);
            sb.append(word.charAt(i));
            i++;
        }
        return sb.toString();
    }
}