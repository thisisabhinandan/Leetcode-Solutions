class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> str; 
        string temp = "";
        for (int i = 0; i <= s.length(); i++) {
            if (i == s.length() || s[i] == ' ') {
                if (!temp.empty()) { // Check if temp is not empty
                    str.push_back(temp);
                    temp = "";
                }
            } else {
                temp += s[i];
            }
        } 

        if (str.size() != pattern.length()) { // Check if the sizes match
            return false;
        }

        unordered_map<char, string> mp; 
        unordered_map<string, char> mp2; // Additional map to check for one-to-one mapping

        for (int i = 0; i < pattern.length(); i++) {
            if (mp.find(pattern[i]) != mp.end() && mp[pattern[i]] != str[i]) {
                return false;
            }
            if (mp2.find(str[i]) != mp2.end() && mp2[str[i]] != pattern[i]) { // Check for one-to-one mapping
                return false;
            }
            mp[pattern[i]] = str[i];
            mp2[str[i]] = pattern[i];
        }
        return true;
    }
};