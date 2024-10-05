class Solution {
public:
    #define MOD 1000000007

    int findTargetSumWays(vector<int>& nums, int target) {
       int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    // Check if (sum + target) is even and non-negative.
    if ((sum + target) % 2 != 0 || (sum + target) < 0) {
        return 0;
    }
    
    int newTarget = (sum + target) / 2;
    if (newTarget > sum) {
        return 0;
    }
    
    int n = nums.size();
    
    // DP array to store the count of subsets.
    std::vector<int> dp(newTarget + 1, 0);
    dp[0] = 1;
    
    // Fill the DP array.
    for (int i = 0; i < n; ++i) {
        for (int j = newTarget; j >= nums[i]; --j) {
            dp[j] = (dp[j] + dp[j - nums[i]]) % MOD;
        }
    }
    
    // Result is in dp[newTarget].
    return dp[newTarget];
    }
};