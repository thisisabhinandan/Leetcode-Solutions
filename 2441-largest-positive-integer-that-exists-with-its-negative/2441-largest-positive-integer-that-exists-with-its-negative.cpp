class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int> st; int maxi=-1; 
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
            if(st.find(-1*nums[i])!=st.end())
            {
                maxi=max(maxi,abs(nums[i]));
            }
        }
        return maxi;
    }
};