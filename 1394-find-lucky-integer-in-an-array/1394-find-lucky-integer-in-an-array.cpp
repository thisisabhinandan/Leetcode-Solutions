class Solution {
public:
    int findLucky(vector<int>& nums) {
        unordered_map<int,int> mp; int ans=-1;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]==nums[i]) {
                ans=max(ans,nums[i]);
            }
        }
        return ans;
    }
};