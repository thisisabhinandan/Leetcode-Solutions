class Solution {
    public int bestClosingTime(String customers) {
        char[] strs = customers.toCharArray();
        int cnt=0; int ans=0; int maxi=0;
        for(int i=0;i<strs.length;i++)
        {
            if(strs[i]=='Y') cnt++;
            else cnt--;
            if(cnt>maxi)
            {
                maxi=cnt;
                ans=i+1;
            }
        }
        return ans;
    }
}
