class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        String[] morse={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        Set<String> ms=new HashSet<>();
        for(int i=0;i<words.length;i++)
        {
            String s=words[i]; 
            StringBuilder sb=new StringBuilder(); 
            for(int j=0;j<s.length();j++)
            {
                char c=s.charAt(j); 
                sb.append(morse[c-'a']);
            }
            ms.add(sb.toString());
        }
        return ms.size();
    }
}