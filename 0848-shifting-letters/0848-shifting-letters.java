class Solution {
    public String shiftingLetters(String s, int[] shifts) {
        int n = shifts.length;
        StringBuilder ans = new StringBuilder();

        // Compute suffix sum directly in shifts array
        for (int i = n - 2; i >= 0; i--) {
            shifts[i] = (shifts[i] + shifts[i + 1]) % 26;
        }

        // Apply shifts to characters
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            int to = (ch - 'a' + shifts[i]) % 26; // Calculate final position in alphabet
            ans.append((char) (to + 'a')); // Convert back to character
        }

        return ans.toString();
    }
}
