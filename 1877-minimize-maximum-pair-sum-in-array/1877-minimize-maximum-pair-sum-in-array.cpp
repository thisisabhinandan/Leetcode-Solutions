class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans=0; int n=nums.size(); 
        int l=0; int r=nums.size()-1; 
        sort(nums.begin(),nums.end());
        while(l<=r)
        {
            ans=max(ans,nums[l]+nums[r]);
            l++; 
            r--;
        }
        return ans;
    }
};

// 2 3 4 4 5 6 
// 2 3 3 5 