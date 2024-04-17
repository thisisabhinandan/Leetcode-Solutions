class Solution {
public:
    int foo(vector<int>& nums, int target, int i, vector<vector<int>>& dp)
    {if(i == nums.size()){
            if(target == 0)
                return 1;   // target reached, hence increase count of solution
            else
                return 0;   //else dont increase
        }
        
        if(dp[i][target+2000]!=-1) return dp[i][target+2000]; 
        return dp[i][target+2000]=foo(nums,target-nums[i],i+1,dp)+foo(nums,target+nums[i],i+1,dp);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        vector<vector<int>> dp(nums.size()+1,vector<int>(5005,-1));
        return foo(nums,target,0,dp);
    }
};

