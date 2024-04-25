class Solution {
public:

    vector<vector<int>> dp;
    int solve(string &s, int k,int n,int prev)
    {
        if(n==0)
            return 0;
        if(dp[n][prev+1]!=-1)
            return dp[n][prev+1];
        int take=0,nottake=0;
        char ch=s[n-1];
        if(prev==-1 || abs((ch-'a')-prev)<=k) // if it is first character in the subsequence or the abs diff is less than k
            take=1+solve(s,k,n-1,ch-'a');     
        nottake=solve(s,k,n-1,prev);
        return dp[n][prev+1]=max(take,nottake);
    }
    int longestIdealString(string s, int k) {
        int n=s.size();
        dp=vector<vector<int>>(n+1,vector<int>(28,-1));
        return solve(s,k,s.size(),-1); //prev==-1 indicate that the subsequence is empty 
    }
};