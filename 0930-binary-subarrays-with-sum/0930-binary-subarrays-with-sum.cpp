class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans=0; unordered_map<int,int>mp; 
        mp[0]=1; int psum=0; 
        for(int i=0;i<nums.size();i++)
        {
            psum+=nums[i];
            ans=ans+mp[psum-goal];
            mp[psum]++;
        }
        return ans; 
    }
};