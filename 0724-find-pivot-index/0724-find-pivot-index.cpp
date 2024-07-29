class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s=0; int r=0; int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(s-nums[i]-r==r) return i;
             r+=nums[i];
        }
        return -1;
    }
};