class Solution { 
    int ans=0; 
    public int maxScoreWords(String[] words, char[] letters, int[] score) {
        int [] freq=new int[26];
        for(int i=0;i<letters.length;i++)
        {
            freq[letters[i]-'a']++;
        }
        backtrack(words,score,freq,0,0);
        return ans;
    }
    public void backtrack(String[] words, int[] score,int [] freq, int curr, int idx)
    {
        if(idx==words.length)
        {
            ans=Math.max(ans,curr);
            return;
        }
         backtrack(words,score,freq,curr,idx+1);
            String word=words[idx];
            int scores=0;
            for(int j=0;j<word.length();j++)
            {
                char ch=word.charAt(j);
                freq[ch-'a']--;
                scores+=score[ch-'a'];
            }
        if(isvalid(freq))
        {
             backtrack(words,score,freq,curr+scores,idx+1);
        }
        for(int j=0;j<word.length();j++)
        {
            char ch=word.charAt(j);
            freq[ch-'a']++;
        }
    }
    public boolean isvalid(int [] freq)
    {
        for(int i=0;i<26;i++)
        {
            if(freq[i]<0) return false;
        }
        return true;
    }
}