class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp; int ans=0; int m=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            m=max(m,mp[nums[i]]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]==m) ans++;
        }
        return ans;
        
    }
};