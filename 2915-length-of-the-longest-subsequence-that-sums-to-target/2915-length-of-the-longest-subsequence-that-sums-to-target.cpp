class Solution {
public:
    int solve(vector<int>& nums,vector<vector<int>>& dp,int target,int i)
    {
        if(target==0) return 0; 
        if(i>=nums.size() || target<0) return -1e9;
        if(dp[i][target]!=-1) return dp[i][target];
        return dp[i][target]=max(solve(nums,dp,target,i+1),1+solve(nums,dp,target-nums[i],i+1));
    }
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        vector<vector<int>> dp(nums.size()+1,vector<int>(target+1,-1));
        int ans=solve(nums,dp,target,0);
        if(ans<0) return -1; 
        else return ans; 
        
    }
};