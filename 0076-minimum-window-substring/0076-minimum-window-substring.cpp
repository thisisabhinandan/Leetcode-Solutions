class Solution {
public:
    string minWindow(string s, string t) {
        map<char, int> smp, tmp;
        for (char c : t) {
            tmp[c]++;
        }
        
        int left = 0, right = 0, start = 0, minLen = INT_MAX;
        int count = 0; // Number of characters matched from `t`
        
        for (right = 0; right < s.size(); right++) {
            if (tmp.find(s[right]) != tmp.end()) {
                smp[s[right]]++;
                if (smp[s[right]] <= tmp[s[right]]) {
                    count++;
                }
            }
            
            while (count == t.size()) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }
                
                if (tmp.find(s[left]) != tmp.end()) {
                    smp[s[left]]--;
                    if (smp[s[left]] < tmp[s[left]]) {
                        count--;
                    }
                }
                left++;
            }
        }
        
        return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
    }
};