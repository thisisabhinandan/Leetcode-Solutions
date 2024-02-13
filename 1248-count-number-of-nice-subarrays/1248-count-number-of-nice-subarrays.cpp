class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0) {nums[i]=0;}
            else nums[i]=1;
        }
        int psum=0; int ans=0; 
        unordered_map<int,int>mp; 
        mp[0]=1; 
        for(int i=0;i<nums.size();i++)
        {
            psum+=nums[i]; 
            ans+=mp[psum-k];
            mp[psum]++;
        }
        return ans;
    }
};