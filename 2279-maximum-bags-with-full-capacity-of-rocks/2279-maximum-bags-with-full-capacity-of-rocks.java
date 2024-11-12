class Solution {
    public int maximumBags(int[] capacity, int[] rocks, int additionalRocks) {
        int n=capacity.length; int cnt=0;
        int [] diff=new int [n];
        for(int i=0;i<n;i++)
        {
            diff[i]=capacity[i]-rocks[i];
        }
        Arrays.sort(diff);
        for(int i=0;i<n;i++)
        {
            if(additionalRocks>=diff[i])
            {
                additionalRocks-=diff[i];
                cnt++;
            }
            else break;
        }
        return cnt;
    }
}