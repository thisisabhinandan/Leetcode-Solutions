class Solution {
    public int[] searchRange(int[] nums, int target) {
        int first=lowerbound(nums,target); 
        int last=upperbound(nums,target); 
        return new int[] {first,last}; 
    }
    public int lowerbound(int nums[], int target)
    {
        int ans=-1; 
        int l=0; int r=nums.length-1; 
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]>=target)
            {
                if(nums[mid]==target)
                {
                     ans=mid;
                }
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans; 
    }
     public int upperbound(int nums[], int target)
    {
        int ans=-1; 
        int l=0; int r=nums.length-1; 
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]<=target)
            {
                if(nums[mid]==target)
                {
                     ans=mid;
                }
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans; 
    }
}