class Solution {
    public int chalkReplacer(int[] chalk, int k) {
        long tot =0; 
        for(int i=0;i<chalk.length;i++)
        {
            tot+=chalk[i]; 
        }
        k%=tot;
        for(int i=0;i<chalk.length;i++)
        {
            if(k-chalk[i]<0)
            {
                return i; 
            }
            k=k-chalk[i];
        }
        return -1;
        
    }
}