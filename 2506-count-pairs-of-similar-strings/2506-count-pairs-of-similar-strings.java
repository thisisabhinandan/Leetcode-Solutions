class Solution {
    public int similarPairs(String[] words) {
        int cnt=0;
        Set<Character> set=new HashSet<>();
        for(int i=0;i<words.length;i++)
        {
            for(int j=i+1;j<words.length;j++)
            {
                String word1=words[i]; 
                String word2=words[j];
                if(similar(word1,word2))
                {
                    cnt++;
                }
            }
        }
        return cnt; 
    }
    public boolean similar(String word1, String word2)
    {
        Set<Character> set1=new HashSet<>();
        Set<Character> set2=new HashSet<>();
        for(int i=0;i<word1.length();i++)
        {
            set1.add(word1.charAt(i));
        }
        for(int i=0;i<word2.length();i++)
        {
            set2.add(word2.charAt(i));
        }
        return set1.equals(set2);
    }
}