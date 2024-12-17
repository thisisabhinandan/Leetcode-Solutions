class Solution {
    public long shiftDistance(String s, String t, int[] nextCost, int[] previousCost) {
        long ans=0; 
        for(int i=0;i<s.length();i++)
        {
            char start=s.charAt(i);
            char end=t.charAt(i);
            long ans1=0; long ans2=0;
            int idx=start-'a';
            while(start!=end)
            {
                ans1+=nextCost[idx%26];
                if(start!='z')
                {
                    start++;
                }
                else{
                    start='a';
                }
                idx++;
            }
             start=s.charAt(i);
             idx=start-'a';
             while(start!=end)
            {
                ans2+=previousCost[(idx+26)%26];
                if(start!='a') 
                {
                    start--;
                }
                 else{
                     start='z'; 
                 }
                 idx--;
            }
            ans+=Math.min(ans1,ans2);
        }
        return ans;
    }
}