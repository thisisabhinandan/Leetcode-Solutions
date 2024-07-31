class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        long long int sum=0; long long int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>0) ans++;
            else break;
        }
        return ans;
    }
};