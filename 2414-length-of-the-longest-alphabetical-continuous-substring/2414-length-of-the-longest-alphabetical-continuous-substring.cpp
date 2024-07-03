class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans=1; int cnt=1;
        for(int i=1;i<s.length();i++)
        {
            if((s[i]-'a')-(s[i-1]-'a')==1) 
            {
                ++cnt;
                ans=max(ans,cnt);
            }
            else cnt=1; 
        }
        return ans;
    }
};