class Solution {
    public String repeatLimitedString(String s, int repeatLimit) {
       StringBuilder ans = new StringBuilder();
        int freq[]=new int [26];
        for(int i=0;i<s.length();i++)
        {
            freq[s.charAt(i)-'a']++;
        }
        for(int i=25;i>=0;i--)
        {
            int r=repeatLimit;
            while(freq[i]>0)
            {
                if(r>0)
                {
                     freq[i]--;
                ans.append((char) (i + 'a'));
                r--;
                }
               else {
                   int next=i-1;
                   while(next>=0 && freq[next]==0)
                   {
                      next--;
                   }
                   if(next<0) break;
                 ans.append((char) (next + 'a'));
                   freq[next]--;
                r=repeatLimit;
               }
            }
        }
        return ans.toString();
    }
}