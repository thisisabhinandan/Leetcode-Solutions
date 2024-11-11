class Solution {
    public int lengthOfLongestSubstring(String s) {
        int [] sfreq=new int[256]; int j=0; int ans=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            sfreq[ch]++;
            while(sfreq[ch]>1)
            {
                char last=s.charAt(j);
                sfreq[last]--;
                j++;
            }
            ans=Math.max(ans,i-j+1);
        }
        return ans;
    }
}