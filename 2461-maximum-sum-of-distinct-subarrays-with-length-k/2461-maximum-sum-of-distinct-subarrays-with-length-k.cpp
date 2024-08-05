class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp; long long int s=0; int j=0; long long int ans=0;
        for(int i=0;i<nums.size();i++)
        {
           s+=nums[i];
            mp[nums[i]]++;
            while(mp[nums[i]]>1||i-j+1>k)
            {
                s-=nums[j];
                mp[nums[j]]--;
                j++;
            }
            if(i-j+1==k) ans=max(ans,s);
        }
        return ans;
    }
};