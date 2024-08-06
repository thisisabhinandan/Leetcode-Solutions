class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end()); int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i]-1)==st.end())
            {
                int curr=nums[i];
                int cnt=1;
                while(st.find(curr+1)!=st.end())
                {
                    cnt++; 
                    curr++;
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};