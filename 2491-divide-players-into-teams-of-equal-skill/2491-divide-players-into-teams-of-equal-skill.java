class Solution {
    public long dividePlayers(int[] skill) {
        Arrays.sort(skill); long ans=0; 
        int l=1; int r=skill.length-2;
        int start=skill[0]+skill[skill.length-1]; 
        while(l<r)
        {
            if(skill[l]+skill[r]!=start)
            {
                return -1;
            }
            l++;
            r--;
        }
        l=0; r=skill.length-1;
          while(l<r)
        {
            ans+=(skill[l]*skill[r]);
            l++;
            r--;
        }
        return ans;
    }
}
