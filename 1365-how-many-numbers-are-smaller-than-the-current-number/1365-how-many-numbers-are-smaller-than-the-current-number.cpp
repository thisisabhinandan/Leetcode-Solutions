class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> a=nums; 
        unordered_map<int,int> mp; 
        sort(a.begin(),a.end()); 
        for(int i=a.size()-1;i>=0;i--)
        {
            mp[a[i]]=i; // a[i], i : 8->4 3->3 2->2(1) 2->1  1->0   
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=mp[nums[i]];
        }
        return nums;
    }
};