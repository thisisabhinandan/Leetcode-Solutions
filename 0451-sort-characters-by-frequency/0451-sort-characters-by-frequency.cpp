class Solution {
public:
    string frequencySort(string s) {
        string ans;
        unordered_map<char, int> mp;

        // Count the frequency of each character
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }

        // Create a bucket array to store characters with same frequency
        vector<vector<char>> bucket(s.length() + 1);
        for (auto& p : mp) {
            bucket[p.second].push_back(p.first);
        }

        // Construct the result string
        for (int i = s.length(); i > 0; i--) {
            for (char c : bucket[i]) {
                ans += string(i, c);
            }
        }

        return ans;
    }
};