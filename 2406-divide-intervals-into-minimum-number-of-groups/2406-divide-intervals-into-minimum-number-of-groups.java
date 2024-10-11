class Solution {
    public int minGroups(int[][] intervals) {
        int range []=new int[9999999];
        for(int[] interval:intervals)
        {
            range[interval[0]]++;
            range[interval[1]+1]--;
        }
        int ans=0; int cnt=0;
        for(int i:range)
        {   
            cnt+=i;
            ans=Math.max(ans,cnt);
        }
        return ans;
    }
}