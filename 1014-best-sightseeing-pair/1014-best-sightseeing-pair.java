class Solution {
    public int maxScoreSightseeingPair(int[] values) {
        int temp1=0; int temp2=0;
        for(int i=0;i<values.length;i++)
        {
            temp1=Math.max(temp1,temp2+values[i]-i); 
            temp2=Math.max(temp2,values[i]+i);
        }
        return temp1;
    }
}