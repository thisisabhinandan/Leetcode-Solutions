class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l=0; int r=0; int prod=1; int ans=0; int n=nums.size(); 
        for(int r=0;r<n;r++)
        {
            prod=prod*nums[r]; 
            while(prod>=k && r>=l)
            {
                prod=prod/nums[l]; 
                l++; 
            }
            ans+=r-l+1;
        }
        return ans; 
    }
};