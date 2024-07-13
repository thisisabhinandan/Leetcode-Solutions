class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0; unordered_map<char,int> mp; int j=0; 
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            while(mp[s[i]]>1)
            {
                mp[s[j]]--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};