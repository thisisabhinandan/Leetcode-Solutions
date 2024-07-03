class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans=0; int cnt=0;
        for(int i=1;i<s.length();i++)
        {
            if((s[i]-'a')-(s[i-1]-'a')==1) 
            {
                cnt++;
                ans=max(ans,cnt);
            }
            else cnt=0; 
        }
        return ans+1;
    }
};