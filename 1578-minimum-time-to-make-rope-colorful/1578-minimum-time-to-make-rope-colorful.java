class Solution {
    public int minCost(String colors, int[] neededTime) {
        int ans=0;
        for(int i=1;i<colors.length();i++)
        {
            if(colors.charAt(i)==colors.charAt(i-1))
            {
                ans+=Math.min(neededTime[i-1],neededTime[i]);
                neededTime[i]=Math.max(neededTime[i],neededTime[i-1]); //ele w min time is removed and element with highest time is kept
            }
        }
        return ans;
    }
}