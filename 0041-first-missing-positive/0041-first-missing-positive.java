class Solution {
    public int firstMissingPositive(int[] nums) {
        HashSet<Integer> st=new HashSet<>(); 
        for(int i:nums)
        {
            st.add(i); 
        }
        int n=1;
        while(true)
        {
            if(!st.contains(n))
            {
                return n; 
            }
            n++;
        }
    }
}