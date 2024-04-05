class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) { int n=nums.size(); 
        vector<int> ans(n); 
        vector<int> prefix(n); vector<int> suffix(n);
        prefix[0]=0; suffix[n-1]=0; 
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+nums[i-1];
            suffix[n-1-i]=suffix[n-i]+nums[n-i];
        }
        for(int i=0;i<n;i++)
        {
            ans[i]=abs(prefix[i]-suffix[i]);
        }
        return ans;
    }
};