class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) { unordered_map<int,int> mp; int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        } vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]]>=2) ans.push_back(nums[i]); mp[nums[i]] = 0;
        }
        return ans;
    }
};