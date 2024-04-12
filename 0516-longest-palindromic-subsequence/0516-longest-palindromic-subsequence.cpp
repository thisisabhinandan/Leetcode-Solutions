class Solution {
public:
    int lcs(string& s, int i, int j,vector<vector<int>>& dp)
    {
        if(i==j) return 1; 
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==s[j]) return dp[i][j]=2+lcs(s,i+1,j-1,dp);
        else return dp[i][j]=max(lcs(s,i+1,j,dp),lcs(s,i,j-1,dp));
    }
    int longestPalindromeSubseq(string s) {
        int n=s.length();
        vector<vector<int>>dp (n+1,vector<int>(n+1,-1));
        return lcs(s,0,n-1,dp);
    }
};