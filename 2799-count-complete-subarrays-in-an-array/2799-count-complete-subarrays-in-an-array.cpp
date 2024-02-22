class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
         unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        } int k=m.size();
        return atmost(nums,k)-atmost(nums,k-1); 
    }
    
int atmost(vector<int> nums, int k)
    {
        int r=0; int l=0; int n=nums.size(); unordered_map<int,int>mp; int ans=0;
        for(int r=0;r<n;r++)
        {
            mp[nums[r]]++; 
            while(mp.size()>k)
            {
                mp[nums[l]]--;
                if(mp[nums[l]]==0) mp.erase(nums[l]);
                l++;
            }
            ans+=r-l+1;
        }
        return ans;
    }
};