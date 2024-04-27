class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a(26,0); vector<int> b(26,0);int ans=0; 
        for(int i=0;i<s.length();i++)
        {
            a[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++)
        {
            b[t[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            ans+=abs(a[i]-b[i]);
        }
        if (ans==0) return true;
        else return false;
    }
};