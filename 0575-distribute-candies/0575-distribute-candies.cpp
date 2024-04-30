class Solution {
public:
    int distributeCandies(vector<int>& nums) {
        unordered_map<int,int> mp; int n=nums.size()/2; 
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        if(mp.size()>=n)
        {
            return n;
        }
        else return mp.size(); 
    }
};