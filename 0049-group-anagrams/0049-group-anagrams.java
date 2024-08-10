class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String,ArrayList<String>> mp=new HashMap(); 
        List<List<String>> ans=new ArrayList<>(); 
        for(int i=0;i<strs.length;i++)
        {
            char arr[]=strs[i].toCharArray();
            Arrays.sort(arr); 
            String str=new String(arr);
            if(!mp.containsKey(str))
            {
                mp.put(str,new ArrayList<>());
            }
            mp.get(str).add(strs[i]);
        }
        ans.addAll(mp.values());
        return ans;
    }
}