class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int l=0; int r=nums.size()-1; 
        vector<int> ans(nums.size()); 
        int i=nums.size()-1;
        while(l<=r)
        { 
            if(abs(nums[l])>abs(nums[r]))
            {
                ans[i]=nums[l]*nums[l];
                i--;
                l++;
            }
         else
         {
             ans[i]=nums[r]*nums[r];
             i--;
             r--;
         }
        }
        return ans;
    }
};