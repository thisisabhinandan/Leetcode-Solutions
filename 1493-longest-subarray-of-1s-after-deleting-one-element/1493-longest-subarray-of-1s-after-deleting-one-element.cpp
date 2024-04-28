class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zero=0; int ans=0; int j=0; int n=nums.size(); 
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0) {zero++;}
            while(zero>1)
            {
               if(nums[j]==0){ zero--;}
               j++;
            }
            ans=max(ans,i-j);
        }
        return ans;
    }
};