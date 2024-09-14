class Solution {
    public int minFlipsMonoIncr(String s) {
        int cnt1=0; 
        int flips=0; 
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='0' && cnt1!=0)
            {
                flips++; 
            }
            else if(s.charAt(i)=='1')
            {
                cnt1++;
            }
            flips=Math.min(flips,cnt1);
        }
        return flips;
    }
}