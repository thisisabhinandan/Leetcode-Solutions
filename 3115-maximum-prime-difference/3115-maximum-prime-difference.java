class Solution {
    public boolean isprime(int n)
    {
        if (n <= 1)
            return false;

        for (int i = 2; i <= Math.sqrt(n); i++)
            if (n % i == 0)
                return false;

        return true;
    }
    public int maximumPrimeDifference(int[] nums) {
        Stack<Integer> stidx=new Stack<>();
        int n=nums.length;
        for(int i=0;i<n;i++)
        {
            if(isprime(nums[i]))
            {
                stidx.push(i);
            }
        } int ans=0;
        for(int j=n-1;j>=0;j--)
        {
            while(!stidx.isEmpty()&&isprime(nums[j]))
            {
                ans=Math.max(ans,j-stidx.pop());
            }
        }
        return ans;
    }
}