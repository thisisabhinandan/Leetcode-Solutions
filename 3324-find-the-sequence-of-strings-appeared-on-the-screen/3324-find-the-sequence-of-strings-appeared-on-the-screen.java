class Solution {
    public List<String> stringSequence(String target) {
        List<String> list=new ArrayList<>(); 
        StringBuilder sb=new StringBuilder(); 
        for(char ch:target.toCharArray())
        {
            sb.append('a');
            list.add(sb.toString());
            while(sb.charAt(sb.length()-1)!=ch)
            {
                char lastdigit=sb.charAt(sb.length()-1);
                if(lastdigit=='z')
                {
                    lastdigit='a';
                }
                else lastdigit++;
                sb.setCharAt(sb.length()-1,lastdigit);
                list.add(sb.toString());
            }
        }
        return list;
    }
}