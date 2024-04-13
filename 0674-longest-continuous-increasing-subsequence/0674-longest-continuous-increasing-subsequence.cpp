class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) { int n=nums.size(); int cnt=0; int ans=0;
        for(int i=0;i<n;i++)
        {
            if(i==0 || nums[i-1]<nums[i])  {cnt++; ans=max(cnt,ans);}
            else cnt=1;  
        }
        return ans;
    }
};