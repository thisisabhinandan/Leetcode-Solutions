class Solution {
    public int maximumUnits(int[][] boxTypes, int truckSize) {
        Arrays.sort(boxTypes,(a,b)->Integer.compare(b[1],a[1])); int ans=0;
        for(int i=0;i<boxTypes.length;i++)
        {
            int boxcnt=boxTypes[i][0];
            int boxtot=boxTypes[i][1];
            if(boxcnt<=truckSize)
            {
                ans+=boxtot*boxcnt;
                truckSize-=boxcnt;
            }
            else {
            ans+=truckSize*boxtot;
            return ans;
            }
        }
        return ans;
    }
}