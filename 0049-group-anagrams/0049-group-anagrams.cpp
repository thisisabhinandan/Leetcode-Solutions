class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp; 
         vector<vector<string>> ans; 
        for(int i=0;i<strs.size();i++)
        {
            string str=strs[i];
            string temp=str;
            sort(temp.begin(),temp.end()); 
            mp[temp].push_back(str);
        }
        for(auto i:mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};