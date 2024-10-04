class Solution {
    public int numberOfBeams(String[] bank) {
        String s=bank[0]; int cnt=0;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='1') cnt++;
        }
        int ans=0;
        for(int i=1;i<bank.length;i++)
        {
            String str=bank[i]; 
            int cnt1=0;
            for(int j=0;j<str.length();j++)
            {
                if(str.charAt(j)=='1') cnt1++;
            }
            if(cnt1!=0) 
            {
            ans+=cnt*cnt1; 
            cnt=cnt1; 
            }
        }
        return ans;
    }
}