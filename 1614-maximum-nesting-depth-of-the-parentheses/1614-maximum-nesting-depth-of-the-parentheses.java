class Solution {
    public int maxDepth(String s) { int cnt=0; int ans=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            if(ch=='(') cnt++;
            else if(ch==')') cnt--;
            ans=Math.max(ans,cnt);
        }
        return ans; 
    }
}