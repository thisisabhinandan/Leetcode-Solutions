class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans; 
        unordered_map<int,int>x; 
        for(int i=0;i<nums.size();i++)
        {
            if(x.find(target-nums[i])!=x.end())
            {
                ans.push_back(x[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            x[nums[i]]=i;
        }
        return ans;
    }
};