class Solution {
public:
    int f(int i,int val,vector<int>& st,int n,vector<vector<int>>& dp){ 
        if(i==n){
            if(val < 0) return 1e9;
            return val;
        }
        if(dp[i][val+3000]!=-1) return dp[i][val+3000];

        // Changes
        int pos = f(i+1,val+st[i],st,n,dp);
        int neg = f(i+1,val-st[i],st,n,dp);

        return dp[i][val+3000] = min(pos, neg);
    }

    int lastStoneWeightII(vector<int>& st) {
        int n = st.size();
        vector<vector<int>> dp(n,vector<int>(6001,-1));
        return f(0,0,st,n,dp);
    }
};