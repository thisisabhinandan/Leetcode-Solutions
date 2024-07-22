class Solution {
public:
    int countAsterisks(string s) {
        int cnt=0; int bars=0; 
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='|')
            {
                bars++;
            }
            if(bars%2==0 && s[i]=='*') cnt++;
        }
        return cnt;
    }
};