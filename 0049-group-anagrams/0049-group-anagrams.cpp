class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<strs.size();i++)
        {
            string original=strs[i]; 
            string newstring=original;
            sort(newstring.begin(),newstring.end());
            mp[newstring].push_back(original);
        }
        for(auto i:mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};