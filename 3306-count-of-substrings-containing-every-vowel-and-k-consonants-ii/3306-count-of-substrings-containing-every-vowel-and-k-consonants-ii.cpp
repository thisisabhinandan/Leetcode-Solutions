class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    long long helper(const string& word, int k) {
        int n = word.size();
        map<char, int> v;  // Vowel frequency map
        int consonantCount = 0;  // Count of consonants in the current window
        int i = 0;  // Left boundary of the window
        long long ans = 0;

        for (int j = 0; j < n; ++j) {
            // Add the current character to the window
            if (isVowel(word[j])) {
                v[word[j]]++;
            } else {
                consonantCount++;
            }

            // Shrink the window if there are more than `k` consonants
            while (v.size() == 5 && consonantCount > k) {
                if (isVowel(word[i])) {
                    v[word[i]]--;
                    if (v[word[i]] == 0) {
                        v.erase(word[i]);
                    }
                } else {
                    consonantCount--;
                }
                i++;
            }

            // Count substrings ending at index `j`
            ans += (j - i + 1);
        }
        return ans;
    }

    long long countOfSubstrings(string word, int k) {
        return helper(word, k) - helper(word, k - 1);
    }
};
