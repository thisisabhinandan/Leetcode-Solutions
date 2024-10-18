class Solution {
    public int maximumSwap(int num) {
        String n=Integer.toString(num);
        char [] ch=n.toCharArray();
        int ans=0; int maxi=0; int idx=-1;
        for(int i=ch.length-1;i>=0;i--)
        {
            if(ch[i]-'0'>maxi)
            {
                maxi=ch[i]-'0';
                idx=i;
            }
            if(idx!=-1)
            {
            swap(ch,i,idx);
            ans=Math.max(ans,Integer.parseInt(new String(ch)));
            swap(ch,i,idx); 
            }            
        }
        return ans;
    }
    private void swap(char[] s, int i, int j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}