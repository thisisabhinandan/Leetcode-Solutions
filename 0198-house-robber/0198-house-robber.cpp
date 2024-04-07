class Solution {
public:
    int foo(vector<int>& A,vector<int>& dp, int i)
    {
        if(i>=size(A)) return 0; 
        if(dp[i] != -1) return dp[i];
        return dp[i]=max(A[i]+foo(A,dp,i+2),foo(A,dp,i+1));
    }
    
    int rob(vector<int>& A) {
        vector<int> dp(size(A),-1);
        return foo(A,dp,0);
    }
        
};