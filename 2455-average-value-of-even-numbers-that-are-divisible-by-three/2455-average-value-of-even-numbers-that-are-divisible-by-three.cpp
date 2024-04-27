class Solution {
public:
    int averageValue(vector<int>& nums) { int ans=0; int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0 && nums[i]%3==0) {ans+=nums[i]; cnt++;}
        }
        if(cnt!=0||ans!=0) return ans/cnt;
        else return 0;
    }
};