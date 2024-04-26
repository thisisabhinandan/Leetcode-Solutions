class Solution {
public:
    int solve(vector<int>& cost,vector<int>& dp, int i)
    {
        if(i>=cost.size()) return 0;
        if(dp[i]!=-1) return dp[i]; 
        return dp[i]=min(cost[i]+solve(cost,dp,i+1),cost[i]+solve(cost,dp,i+2));
    }
    int solve1(vector<int>& cost,vector<int>& dp, int i)
    {
        if(i>=cost.size()) return 0;
        if(dp[i]!=-1) return dp[i]; 
        return dp[i]=min(cost[i]+solve1(cost,dp,i+1),cost[i]+solve1(cost,dp,i+2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,-1); 
        int ans1=solve(cost,dp,0);
        int ans2=solve1(cost,dp,1);
        return min(ans1,ans2);
    }
};