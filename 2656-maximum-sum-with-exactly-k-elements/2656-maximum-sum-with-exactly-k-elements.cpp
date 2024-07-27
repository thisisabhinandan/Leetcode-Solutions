class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int s=nums[nums.size()-1];
        int ans=0;
        for(int i=0;i<k;i++)
        {
           ans+=s;
           s++;
        }
        return ans;
    }
};