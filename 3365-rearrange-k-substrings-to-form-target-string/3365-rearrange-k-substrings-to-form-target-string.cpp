class Solution {
public:
    bool isPossibleToRearrange(string s, string t, int k) {
        // Check if lengths are divisible
        if (s.length() != t.length() || s.length() % k != 0) {
            return false;
        }

        int len = s.length() / k; // Length of each substring
        vector<string> sSubstrings, tSubstrings;

        // Split s and t into substrings of size len
        for (int i = 0; i < s.length(); i += len) {
            sSubstrings.push_back(s.substr(i, len));
            tSubstrings.push_back(t.substr(i, len));
        }

        // Sort the entire list of substrings
        sort(sSubstrings.begin(), sSubstrings.end());
        sort(tSubstrings.begin(), tSubstrings.end());

        // Check if both substring sets are equal
        return sSubstrings == tSubstrings;
    }
};
