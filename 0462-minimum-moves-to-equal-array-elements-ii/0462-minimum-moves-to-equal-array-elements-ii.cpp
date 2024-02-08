class Solution {
public:
    int minMoves2(vector<int>& nums) {
        long long int n=nums.size(); 
        sort(nums.begin(),nums.end()); 
        long long median =nums[n/2];
        long long int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=ans+abs(median-nums[i]);
        }
        return ans;
    }
};