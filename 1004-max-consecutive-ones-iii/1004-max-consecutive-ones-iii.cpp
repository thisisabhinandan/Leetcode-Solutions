class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int cnt=0; int j=0; int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) 
            {
                cnt++;
            }
            if(cnt>k)
            {
                if(nums[j]==0) cnt--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};