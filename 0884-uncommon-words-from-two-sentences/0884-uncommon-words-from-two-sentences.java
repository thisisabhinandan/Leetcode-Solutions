class Solution {
    public String[] uncommonFromSentences(String s1, String s2) {
        List<String> list=new ArrayList<>(); 
        Map<String,Integer> mp1=new HashMap<>();
        String str1[]=s1.split(" ");
        String str2[]=s2.split(" ");
        for(int i=0;i<str1.length;i++)
        {
           mp1.put(str1[i],mp1.getOrDefault(str1[i],0)+1);
        }
        for(int i=0;i<str2.length;i++)
        {
            mp1.put(str2[i],mp1.getOrDefault(str2[i],0)+1);
        }
        for(Map.Entry<String,Integer> entry:mp1.entrySet())
        {
            if(entry.getValue()==1)
            {
                list.add(entry.getKey());
            }
        }
        String ans[]=new String[list.size()];
         for(int i=0;i<list.size();i++)
        {
            ans[i]=list.get(i);
        }
        return ans;
    }
}