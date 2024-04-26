class Solution {
public:
    int solve(vector<int>& nums,vector<vector<int>>& dp,int target,int i)
    {
        if(target==0) return 1; 
        if(target<0||i>=nums.size()) return 0; 
        if(dp[i][target]!=-1) return dp[i][target];
        return dp[i][target]=  solve(nums,dp,target,i+1)+solve(nums,dp,target-nums[i],0);
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<vector<int>> dp(nums.size()+1,vector<int>(target+1,-1));
        
        return solve(nums,dp,target,0);
    }
};