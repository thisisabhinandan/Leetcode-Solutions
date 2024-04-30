class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map<int,int> mp; int mx=0; 
        for(int i=0;i<nums.size();i++)
        {
            mx=max(nums[i],mx);
            mp[nums[i]]++;
        }
      if (nums.size() != mx + 1)   return false; 
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=mx && mp[nums[i]]>1) return false;
            if(nums[i]==mx && mp[nums[i]]!=2) return false;
        }
        return true;
    }
};