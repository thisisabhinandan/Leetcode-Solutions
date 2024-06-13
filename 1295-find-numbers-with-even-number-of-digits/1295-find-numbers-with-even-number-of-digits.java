class Solution {
    public int findNumbers(int[] nums) {
        int ans=0; 
        for(int i=0;i<nums.length;i++)
        {
            int cnt=0;  
            int x=nums[i];
            while(x!=0)
            {
                cnt++;
                x=x/10;
            }
            if(cnt%2==0) ans++;
        }
        return ans;
    }
}