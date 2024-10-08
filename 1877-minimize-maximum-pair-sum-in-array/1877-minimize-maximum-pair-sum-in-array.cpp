class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=-1e9;
        int l=0; int r=nums.size()-1;
        while(l<r)
        {
            ans=max(ans,nums[l]+nums[r]);
            l++; r--;
        }
        return ans;
    }
};