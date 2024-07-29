class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st; int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i]-1)==st.end())
            {
               int curr=nums[i]; int cnt=1;
               while(st.find(curr+1)!=st.end())
                {
                   curr++;
                   cnt++;
                }
                ans=max(cnt,ans);
            }
        }
        return ans; 
    }
};