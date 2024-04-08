class Solution {
public:
    int foo(vector<int>&nums, vector<int>&dp, int i)
    {
        if(i>=nums.size()) return 0; 
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(nums[i]+foo(nums,dp,i+2),foo(nums,dp,i+1));
    }
    int rob(vector<int>& nums) { int n=nums.size();
        vector<int>nums1; vector<int>nums2;   
        vector<int>dp1(n-1,-1); vector<int>dp2(n-1,-1);
        if(nums.size()==1)return nums[0];
        for(int i=0;i<n;i++)
        {
            if(i!=0) nums1.push_back(nums[i]);
            if(i!=n-1) nums2.push_back(nums[i]);
        }
        return max(foo(nums1,dp1,0),foo(nums2,dp2,0));
    }
};