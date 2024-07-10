class Solution {
    public String mostCommonWord(String paragraph, String[] banned) {
        Map<String,Integer> mp=new HashMap<>();
        String str=paragraph.toLowerCase().replaceAll("[^a-zA-Z ]"," ");
        String para[]=str.split("\\s+");
        int maxi=0; String ans="";
        Set<String> set=new HashSet<>();
        for(String bannedWord:banned){
            set.add(bannedWord);
        }
        for(int i=0;i<para.length;i++)
        {
            String s=para[i];
            if(!set.contains(para[i]))
            {
                mp.put(s,mp.getOrDefault(s,0)+1);
            }
        }
        for(Map.Entry<String,Integer> entry:mp.entrySet())
        {
            if(maxi<entry.getValue())
            {
                ans=entry.getKey();
                maxi= entry.getValue();
            }
        }
        return ans;
    }
}