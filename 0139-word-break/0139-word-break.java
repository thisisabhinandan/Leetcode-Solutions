class Solution {
    public boolean wordBreak(String s, List<String> wordDict) {
        Set<String> st=new HashSet<>(wordDict);
        boolean [] dp=new boolean[s.length()+1];
        dp[0]=true;
        for(int i=1;i<=s.length();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(dp[j] && st.contains(s.substring(j,i)))
                {
                    dp[i]=true; 
                }
            }
        }
        return dp[s.length()];
    }
}