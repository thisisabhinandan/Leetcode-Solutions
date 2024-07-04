class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp; 
        mp[0]=1; int sum=0; int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            mp[(sum%k+k)%k]++;
        }
        for(auto i:mp)
        {
            ans+=i.second*(i.second-1)/2;
        }
        return ans;
    }
};
