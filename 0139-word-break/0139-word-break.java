class Solution {
    public boolean wordBreak(String s, List<String> wordDict) {
        boolean [] dp=new boolean[s.length()+1]; 
        Set<String> st=new HashSet<>(wordDict);
        dp[0]=true; //can always make the first substring
        for(int i=1;i<=s.length();i++)
        {
            for(int j=0;j<i;j++)
            {
                //if we can make smaller then true;
                if(dp[j] && st.contains(s.substring(j,i)))
                {
                    dp[i]=true; 
                }
            }
        }
        return dp[s.length()];
    }
}