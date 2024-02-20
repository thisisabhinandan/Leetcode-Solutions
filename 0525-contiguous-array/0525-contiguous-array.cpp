class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp; 
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) nums[i]=-1; 
        }
        int k=0; int psum=0; int len=0; 
        for(int i=0;i<nums.size();i++)
        {
            psum+=nums[i]; 
            if(psum==k){ len=max(len,i+1); }
            if(mp.find(psum-k)!=mp.end())
            {
                len=max(len,i-mp[psum-k]);
            }
            else
                mp[psum]=i;
            
        }
        return len; 
    }
};