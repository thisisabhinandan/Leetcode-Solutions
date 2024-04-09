class Solution {
public:
    int maxDepth(string s) { int ans=0; int res=0; 
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                ans++;
                res=max(ans,res);
            }
            if(s[i]==')') ans--; 
        }
        return res;
    }
};