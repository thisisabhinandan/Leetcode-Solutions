class Solution {
public:
    int foo(int amount, vector<int>& coins, int i, vector<vector<int>>& dp)
    {
        if (amount == 0)  return 1;

        if (i == coins.size() || amount < 0) return 0;
        
        if (dp[i][amount]!=-1) return dp[i][amount];
        return dp[i][amount]=foo(amount,coins,i+1,dp)+foo(amount-coins[i],coins,i,dp);
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size()+1,vector<int>(amount+1,-1));
        return foo(amount,coins,0,dp);
    }
};