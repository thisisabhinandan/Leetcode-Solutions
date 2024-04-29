class Solution {
public:
    int atmost(vector<int>& nums, int goal)
    {
         
        int ans=0; int j=0; int sum=0; int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
            while(sum>goal && i>=j)
            {
                sum-=nums[j];
                j++;
            }
            ans+=i-j+1;
        }
        return ans; 
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums,goal)-atmost(nums,goal-1);
    }
};