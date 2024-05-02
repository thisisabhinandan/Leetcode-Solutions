class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans; 
        unordered_map<char,int> mp;
        for(int i=0;i<p.length();i++) mp[p[i]]++;
        int j=0;
        for(int i=0;i<s.length();i++)
        {   bool b=true;
            mp[s[i]]--;
            if(i-j+1==p.length())
            {
                for(int k=0;k<p.length();k++)
                {
                    if(mp[p[k]]!=0)
                    {
                        b=false; break; 
                    }
                }
                if(b==true) ans.push_back(j);
                mp[s[j]]++;
                j++;
            }
        }
        return ans;
    }
};