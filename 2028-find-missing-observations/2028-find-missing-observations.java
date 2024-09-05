class Solution {
    public int[] missingRolls(int[] rolls, int mean, int n) {
        int sum=0; int m=rolls.length; 
        for(int i=0;i<m;i++)
        {
            sum+=rolls[i]; 
        }
        int maxi=mean*(m+n) - sum;
        if(maxi>6*n || maxi<n)
        {
            return new int[0]; 
        }
        int [] ans=new int[n]; 
        int num=maxi/n; 
        int mod=maxi%n; 
        Arrays.fill(ans,num); 
        for(int i=0;i<mod;i++)
        {
            ans[i]++;
        }
        return ans;
    }
}
