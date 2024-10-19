class Solution {
    public String minRemoveToMakeValid(String s) {
        Stack<Integer> stidx=new Stack<>();
        StringBuilder sb=new StringBuilder(s);
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='(')
            {
                stidx.push(i);
            }
            else if(s.charAt(i)==')')
            {
                if(!stidx.isEmpty()) stidx.pop();
                else sb.setCharAt(i,'*');
            }
        }
        while(!stidx.isEmpty())
        {
            sb.setCharAt(stidx.pop(),'*');
        }
        StringBuilder res=new StringBuilder();
        for(int i=0;i<sb.length();i++)
        {
            if(sb.charAt(i)!='*')
            {
                res.append(sb.charAt(i));
            }
        }
        return res.toString();
    }
}