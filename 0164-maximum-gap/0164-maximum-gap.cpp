class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int ans=0; int gap=0; sort(nums.begin(),nums.end()); 
        if(nums.size()==0) return ans; 
        if (nums.size()==1) return ans; 
        for(int i=0;i<nums.size()-1;i++)
        {
            gap=nums[i+1]-nums[i];
            ans=max(gap,ans);
        }
        return ans;
    }
};