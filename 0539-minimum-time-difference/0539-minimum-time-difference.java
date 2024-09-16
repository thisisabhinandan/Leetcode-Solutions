class Solution {
    public int findMinDifference(List<String> timePoints) {
        int n=timePoints.size();
        int[] minutes=new int [n];
        for(int i=0;i<n;i++)
        {
            String s=timePoints.get(i);
            int hrs=(Integer.valueOf(s.charAt(0)) * 10 +Integer.valueOf(s.charAt(1)))*60;
            int mins=Integer.valueOf(s.charAt(3))*10 +Integer.valueOf(s.charAt(4));
            minutes[i]=hrs+mins; 
        }
        Arrays.sort(minutes); 
        int ans=Integer.MAX_VALUE;
        for(int i=1;i<minutes.length;i++)
        {
            ans=Math.min(ans,minutes[i]-minutes[i-1]);
        }
return Math.min(ans, 1440 - minutes[minutes.length - 1] + minutes[0]);

    }
}