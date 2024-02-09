class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp; 
        mp[0]=1;
        int presum=0; int cnt=0; 
        for(int i=0;i<nums.size();i++)
        {
            presum+=nums[i]; 
            cnt+=mp[presum-k];
            mp[presum]++;
        }
        return cnt;
    }
};