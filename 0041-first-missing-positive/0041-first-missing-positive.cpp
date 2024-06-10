class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>mp; 
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        } int k=1;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(k)==mp.end()) return k; 
            k++;
        }
        return nums.size()+1;
    }
};