class Solution {
    public int minLength(String s) {
        Stack<Character> st=new Stack<>();
        int n=s.length();
        st.push(s.charAt(0));
        for(int i=1;i<n;i++)
        {
            if(!st.empty() && ((st.peek()=='A'&&s.charAt(i)=='B')||(st.peek()=='C'&&s.charAt(i)=='D')))
               {
                   st.pop();
               }
               else{
                   st.push(s.charAt(i));
               }
        }
        return st.size();
    }
}