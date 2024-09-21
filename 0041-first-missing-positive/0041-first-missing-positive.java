class Solution {
    public int firstMissingPositive(int[] nums) {
        Set<Integer> st=new HashSet<>();
        for(int i=0;i<nums.length;i++)
        {
            st.add(nums[i]);
        }
        Iterator<Integer> i = st.iterator();
        int n=1; 
        while(i.hasNext())
        {
            if(st.contains(n))
            {
                n++;
            }
            else 
            {
                return n; 
            }
        }
        return -1;
    }
}