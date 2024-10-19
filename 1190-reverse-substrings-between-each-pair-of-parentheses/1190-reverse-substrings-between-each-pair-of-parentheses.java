class Solution {
    public String reverseParentheses(String s) {
        Stack<Integer> stidx=new Stack<>(); int i=0;
        StringBuilder sb=new StringBuilder(s);
        for(char ch:s.toCharArray())
        {
            if(ch=='(')
            {
                stidx.push(i);
            }
            else if(ch==')')
            {
                int start=stidx.pop();
                reverse(sb,start+1,i-1); 
            }
        i++;
        }
        StringBuilder ans=new StringBuilder(); 
        for(int j=0;j<sb.length();j++)
        {
            char ch=sb.charAt(j);
            if(ch!=')' && ch!='(')
            {
                ans.append(ch);
            }
        }
        return ans.toString();
    }
    private StringBuilder reverse(StringBuilder sb, int i, int j)
    {
        StringBuilder reversed=sb;
        while(i<j)
        {
            char ch=sb.charAt(i);
            sb.setCharAt(i,reversed.charAt(j));
            sb.setCharAt(j,ch);
            i++;
            j--;
        }
        return reversed;
    }
}