class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=-1e9; int csum=0; 
        for(int i=0;i<nums.size();i++)
        {
            csum+=nums[i];
            maxsum=max(maxsum,csum);
            if(csum<=0) csum=0;
        }
        return maxsum; 

    }
};