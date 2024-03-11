class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end()); int ans=0; int cnt=1;
        if(nums.size()==0) return 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]!=nums[i])
            {
                if(nums[i-1]+1==nums[i]){
                cnt++;
            }
                else
                {
                    ans=max(ans,cnt); 
                    cnt=1;
                }
                
        }
        }
        return max(ans,cnt);
    }
};