class Solution {
    public int maxCount(int[] banned, int n, int maxsum) {
        Set<Integer> st=new HashSet<>(); 
        for(int i=0;i<banned.length;i++)
        {
            st.add(banned[i]);
        }
        int curr=0; int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(st.contains(i))
            {
                continue;
            }
            if(i+curr>maxsum)
            {
                break;
            }
            else{
                cnt++;
                curr+=i;
            }
        }
        return cnt;
    }
}