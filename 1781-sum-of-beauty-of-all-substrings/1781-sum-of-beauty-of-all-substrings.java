class Solution {
    public int beautySum(String s) {
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            int freq[]=new int[26];
            for(int j=i;j<s.length();j++)
            {
                freq[s.charAt(j)-'a']++;
                int mini=Integer.MAX_VALUE;
                int maxi=Integer.MIN_VALUE;
                for(int k=0;k<26;k++)
                {
                    if(freq[k]!=0)
                    {
                    mini=Math.min(freq[k],mini);
                    maxi=Math.max(freq[k],maxi);
                    }
                }
                ans+=maxi-mini;
            }
        }
        return ans;
    }
}