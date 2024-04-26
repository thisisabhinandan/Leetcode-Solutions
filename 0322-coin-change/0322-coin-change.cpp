class Solution {
public:
    int solve(vector<int>&coins, int amount, int i, vector<vector<int>>& dp)
    {
       if(amount == 0) return 0; 
        if(i>=coins.size() || amount<0) return 1e9; 
        if(dp[i][amount]!=-1) return dp[i][amount]; 
        int nt=0;
        nt=solve(coins,amount,i+1,dp);
        int t=0;
        t=1+solve(coins,amount-coins[i],i,dp);
        return dp[i][amount]=min(t,nt);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp (coins.size()+1,vector<int>(amount+1,-1));
        int ans= solve(coins,amount,0,dp);
        if(ans==1e9) return -1; 
        else return ans;
    }
};