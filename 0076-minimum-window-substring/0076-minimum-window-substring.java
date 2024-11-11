import java.util.HashMap;
import java.util.Map;

class Solution {
    public String minWindow(String s, String t) {
        HashMap<Character, Integer> mp1 = new HashMap<>(); 
        HashMap<Character, Integer> mp2 = new HashMap<>();
        int j = 0, ans = Integer.MAX_VALUE;
        String str = "";
        
        // Populate mp2 with character frequencies from t
        for (int i = 0; i < t.length(); i++) {
            char ch = t.charAt(i);
            mp2.put(ch, mp2.getOrDefault(ch, 0) + 1); 
        }
        
        int requiredMatches = mp2.size();
        int formedMatches = 0;

        // Start sliding window
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            mp1.put(ch, mp1.getOrDefault(ch, 0) + 1);
            
            // Check if current character matches required frequency
            if (mp2.containsKey(ch) && mp1.get(ch).equals(mp2.get(ch))) {
                formedMatches++;
            }
            
            // When we have all required characters, try to shrink the window
            while (formedMatches == requiredMatches) {
                if (i - j + 1 < ans) {
                    ans = i - j + 1;
                    str = s.substring(j, i + 1);
                }
                
                // Shrink window from the left by reducing the frequency of s[j]
                char leftChar = s.charAt(j);
                mp1.put(leftChar, mp1.get(leftChar) - 1);
                
                // If a character in mp2 goes below required count, reduce match count
                if (mp2.containsKey(leftChar) && mp1.get(leftChar) < mp2.get(leftChar)) {
                    formedMatches--;
                }
                
                j++; // Move the left pointer
            }
        }
        
        return str;
    }
}
