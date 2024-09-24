class Solution {
    public int longestCommonPrefix(int[] arr1, int[] arr2) {
        HashSet<Integer> st=new HashSet<>();
        for(int i=0;i<arr2.length;i++)
        {
            while(arr2[i]!=0)
            {
                st.add(arr2[i]);
                arr2[i]=arr2[i]/10;
            }
        } int maxlen=0; 
        for(int i=0;i<arr1.length;i++)
        {
            while(arr1[i]!=0)
            {  
                if(st.contains(arr1[i]))
            {
                String str=String.valueOf(arr1[i]);
                maxlen=Math.max(maxlen,str.length());
            }
                arr1[i]=arr1[i]/10;
            }
            
        }
        return maxlen;
    }
}