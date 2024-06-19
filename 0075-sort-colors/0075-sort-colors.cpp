class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(); int mid=0; int l=0; int h=n-1; 
        for(int i=0;i<n;i++)
        {
            if(nums[mid]==2)
            {
                swap(nums[h],nums[mid]); 
                h--; 
            }
            else if(nums[mid]==0)
            {
                swap(nums[l],nums[mid]); 
                l++;
                mid++;
            }
            else mid++;
        }
    }
};