import java.util.*;

class Solution {
    public int maximumLength(String s) {
        // Step 1: Identify all runs of identical characters
        List<Integer>[] runs = new ArrayList[26]; // To store runs for each character
        for (int i = 0; i < 26; i++) {
            runs[i] = new ArrayList<>();
        }

        int n = s.length();
        int i = 0;
        while (i < n) {
            char c = s.charAt(i);
            int count = 1;
            while (i + 1 < n && s.charAt(i + 1) == c) {
                count++;
                i++;
            }
            runs[c - 'a'].add(count); // Add the run length for the character
            i++;
        }

        // Step 2: For each character, count how many times substrings of different lengths occur
        int result = -1;
        for (int j = 0; j < 26; j++) {
            if (runs[j].isEmpty()) {
                continue; // Skip characters that don't appear
            }

            // Sort the run lengths in descending order
            Collections.sort(runs[j], Collections.reverseOrder());

            // Check for substrings of length l (from 1 to the maximum run length)
            for (int l = 1; l <= runs[j].get(0); l++) {
                int count = 0;
                for (int run : runs[j]) {
                    if (run < l) {
                        break; // No more runs of length l or greater
                    }
                    count += (run - l + 1); // Number of substrings of length l in this run
                    if (count >= 3) {
                        result = Math.max(result, l); // Update the result
                        break; // No need to check smaller lengths for this character
                    }
                }
            }
        }

        return result;
    }
}