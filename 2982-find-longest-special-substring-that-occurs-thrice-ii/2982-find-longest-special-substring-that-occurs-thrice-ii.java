import java.util.*;

class Solution {
    public int maximumLength(String s) {
        int n = s.length();
        // Array to store the lengths of runs for each character (a-z)
        List<Integer>[] charRuns = new ArrayList[26];
        for (int i = 0; i < 26; i++) {
            charRuns[i] = new ArrayList<>();
        }

        // Preprocess: Find all runs of each character
        for (int i = 0; i < s.length(); ) {
            char ch = s.charAt(i);
            int cnt = 1; // Start with the current character
            i++;
            while (i < s.length() && ch == s.charAt(i)) {
                cnt++;
                i++;
            }
            // Add the length of the run to the corresponding character's list
            charRuns[ch - 'a'].add(cnt);
        }

        // Binary search on the length
        int lo = 1, hi = n, res = -1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (check(charRuns, mid)) {
                res = mid; // Update result if mid is feasible
                lo = mid + 1; // Try for a longer length
            } else {
                hi = mid - 1; // Try for a shorter length
            }
        }

        return res == 0 ? -1 : res;
    }

    // Check if there exists a character with at least 3 substrings of length `length`
    private boolean check(List<Integer>[] charRuns, int length) {
        for (List<Integer> runs : charRuns) {
            int count = 0;
            for (int run : runs) {
                if (run >= length) {
                    count += (run - length + 1); // Number of substrings of length `length`
                }
                if (count >= 3) {
                    return true; // Found 3 substrings of length `length`
                }
            }
        }
        return false; // No character has 3 substrings of length `length`
    }
}