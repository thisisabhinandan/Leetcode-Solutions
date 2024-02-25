class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end()); long long int sum=0; int r=0; int l=0; int ans=0;
        for(int r=0;r<nums.size();r++)
        {
            sum+=nums[r]; 
            while((r-l+1)*1L*nums[r]-sum>k)
            {   
                sum-=nums[l];
                l++; 
            } ans=max(ans,r-l+1);
        } return ans;
    }
};