
class Solution {
public:
    string frequencySort(string s) {
        string ans=""; 
        unordered_map<char,int> mp; 
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++; 
        }
        vector<pair<char,int>> freq(mp.begin(),mp.end());
        sort(freq.begin(),freq.end(), [](pair<char,int>& a, pair<char,int>& b)
             {
                 return a.second>b.second; 
             });
        for(int i=0;i<freq.size();i++)
        {
            ans+=string(freq[i].second,freq[i].first);
        }
        return ans;
    }
};
