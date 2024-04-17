class Solution {
public:
    int solve(vector<int>&coins, int amount, int n, vector<vector<int>>& dp)
    {
        if(amount==0) return 0;
        if(n >=coins.size() || amount < 0) return INT_MAX-1;
        if(dp[n][amount]!=-1) return dp[n][amount]; 
        return dp[n][amount]=min(solve(coins,amount,n+1,dp),1+solve(coins,amount-coins[n],n,dp));
        
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp (coins.size()+1,vector<int>(amount+1,-1));
        int ans= solve(coins,amount,0,dp);
        return (ans < INT_MAX-1)?ans:-1;
    }
};