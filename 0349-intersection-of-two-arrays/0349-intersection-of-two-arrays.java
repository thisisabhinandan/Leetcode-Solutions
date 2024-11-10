class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> st1=new HashSet<>();
        Set<Integer> st2=new HashSet<>();
        for(int i=0;i<nums1.length;i++)
        {
            st1.add(nums1[i]);
        }
        for(int i=0;i<nums2.length;i++)
        {
            st2.add(nums2[i]);
        }
        List<Integer> list=new ArrayList<>();
        for(int i=0;i<=1000;i++)
        {
            if(st1.contains(i)&&st2.contains(i))
            {
                list.add(i);
            }
        }
        int [] ans=new int[list.size()];
        for(int i=0;i<list.size();i++)
        {
            ans[i]=list.get(i);
        }
        return ans;
    }
}