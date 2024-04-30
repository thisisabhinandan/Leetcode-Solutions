class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,int> mp1; 
        unordered_map<string,int> mp2;
        for(int i = 0; i < pattern.length(); i++) {
            mp1[pattern[i]] = i+1;
        }
        int i=0;
        vector<string> v;
        string word;
        stringstream iss(s);
        while (iss >> word)
        {
            v.push_back(word);
            mp2[v[i]] = i+1;
            i++;
        }
          if (pattern.size() != v.size())
            return false;
        for(int j = 0; j < pattern.length(); j++) {
            if(mp1[pattern[j]] != mp2[v[j]]) {
                return false;
            }
        }
        
        return true;
    }
};
