class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        int j=0; map<int,int> mp; int ans=0; int freq=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            freq=max(freq,mp[nums[i]]);
            while(i-j+1-freq>k)
            {
                mp[nums[j]]--;
                j++;
                
            }
            ans=max(ans,freq);
        }
        return ans;
    }
};