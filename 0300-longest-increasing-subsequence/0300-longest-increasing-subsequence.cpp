class Solution {
public:
    
    int lis(vector<int>& nums, int i, int prev,vector<int>& dp)
    {
        int take; int nottake; 
        if(i==nums.size()) return 0; 
        if(dp[prev+1]!=-1) return dp[prev+1];
         nottake=lis(nums,i+1,prev,dp);
        
        if(prev==-1 || nums[i]>nums[prev]) take=1+lis(nums,i+1,i,dp);
        
        return dp[prev+1]=max(take,nottake);
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return lis(nums,0,-1,dp); 
    }
};