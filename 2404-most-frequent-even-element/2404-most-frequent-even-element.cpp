class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0) mp[nums[i]]++;
        } int freq=-1; int ans=-1;
        for(auto i:mp)
        {
            if(i.second>freq)
            {
                freq=i.second; 
                ans=i.first;
            }
        }
        return ans;
    }
};