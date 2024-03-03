class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end()); int ans=0; int gap=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            gap=nums[i+1]-nums[i];
            ans=max(gap,ans);
        }
        return ans;
    }
};