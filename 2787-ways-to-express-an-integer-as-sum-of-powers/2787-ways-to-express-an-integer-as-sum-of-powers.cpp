class Solution {
public:
    int mod = 1e9+7;
    int solve(int n, int x, vector<vector<int>>& dp,int i)
    {
        if(n==0) return 1;
        if(n<0) return 0; 
        if(pow(i,x) > n) return 0;
        if(dp[n][i]!=-1) return dp[n][i]; 
        return dp[n][i]=(solve(n-pow(i,x),x,dp,i+1)%mod+solve(n,x,dp,i+1)%mod)%mod;
    }
    int numberOfWays(int n, int x) {
        vector<vector<int>> dp (301,vector<int>(301,-1));
        return solve(n,x,dp,1);
    }
};