class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) { int ans=0; int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1) {cnt++; ans=max(cnt,ans);}
            else cnt=0;
        }
        return ans;
    }
};