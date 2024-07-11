class Solution {
    public void moveZeroes(int[] nums) {
        int cnt=0; 
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]!=0) 
            {
                swap(nums,i,cnt);
                cnt++;
            }
        }
    }
    static void swap(int nums[],int a,int b)
    {
        int temp=0; 
        temp=nums[a];
        nums[a]=nums[b];
        nums[b]=temp; 
    }
}