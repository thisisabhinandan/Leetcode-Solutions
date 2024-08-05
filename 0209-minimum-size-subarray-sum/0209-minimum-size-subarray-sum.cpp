class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int j=0; int s=0; int ans=1e9;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            while(s>=k)
            {
                ans=min(ans,i-j+1);
                s-=nums[j];
                j++;
            }
        }
        if(ans==1e9) return 0;
        else return ans;
    }
};