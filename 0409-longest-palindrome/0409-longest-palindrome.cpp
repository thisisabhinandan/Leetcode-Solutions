class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        int cnt=0;
        for(int i=0;i<s.length();i++)
        {
            if(mp[s[i]]%2==1) {
                cnt++;
                mp[s[i]]--;
                }
            
        }
        if(cnt>1) return s.length()-cnt+1;
        return s.length();
    }
};