class Solution {
    public int maxWidthRamp(int[] nums) {
        Stack<Integer> stidx=new Stack<>(); int ans=0;
        for(int i=0;i<nums.length;i++)
        {
            if(stidx.isEmpty()||nums[stidx.peek()]>nums[i])
            {
                stidx.push(i);
            }
        }
        for(int j=nums.length-1;j>=0;j--)
        {
            while(!stidx.isEmpty()&&nums[j]>=nums[stidx.peek()])
            {
                ans=Math.max(ans,j-stidx.peek());
                stidx.pop();
            }
            
        }
        return ans;
    }
}