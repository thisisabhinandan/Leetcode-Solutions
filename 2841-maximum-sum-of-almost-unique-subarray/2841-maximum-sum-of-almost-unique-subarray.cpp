class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        map<int,int> mp; 
        int j=0; long long int sum=0; long long int ans=0; 
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            sum+=nums[i];
            if(i-j+1==k)
            {
                if(mp.size()>=m)
                {
                    ans=max(ans,sum);
                }
                mp[nums[j]]--;
                if(mp[nums[j]]==0) mp.erase(nums[j]);
                sum-=nums[j];
                j++;
            }
        }
        return ans;
    }
};