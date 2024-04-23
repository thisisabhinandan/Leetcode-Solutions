class Solution {
public:
    int solve(vector<vector<int>>& dp, int i, int j)
    {
        if(i>=dp.size() || j>=dp[0].size()) return 0;
        
        if(i==dp.size()-1 && j==dp[0].size()-1) return 1;
        
        if(dp[i][j]!=-1) return dp[i][j]; 
        
        return dp[i][j]=solve(dp,i+1,j)+solve(dp,i,j+1);
        
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1)); 
        return solve(dp,0,0);
    }
};
