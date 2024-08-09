class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int cnt=0; int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]!=nums[i]) 
            {
                    cnt++;
            }
            ans+=cnt;
        }
        return ans;
    }
};