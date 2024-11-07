class Solution {
    int ans=Integer.MAX_VALUE; 
    public int distributeCookies(int[] cookies, int k) {
        int []ppl =new int[k];
        backtrack(cookies,ppl,k,0);
        return ans;
    }
    public void backtrack(int [] cookies, int [] ppl, int k , int idx)
    {
        if(idx==cookies.length)
        {
            int maxi=0;
            for(int i=0;i<k;i++)
            {
                maxi=Math.max(ppl[i],maxi);
            }
            ans=Math.min(ans,maxi);
            return;
        }
        for(int i=0;i<k;i++)
        {
            ppl[i]+=cookies[idx];
            backtrack(cookies,ppl,k,idx+1);
            ppl[i]-=cookies[idx];
        }
        return;
    }
}