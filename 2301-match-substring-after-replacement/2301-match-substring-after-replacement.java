class Solution {
    public boolean matchReplacement(String s, String sub, char[][] mappings) {
        Map<Character, Set<Character>> map = new HashMap<>();
        
        // Populate the map with all possible replacements
        for (char[] mapping : mappings) {
            map.putIfAbsent(mapping[0], new HashSet<>());
            map.get(mapping[0]).add(mapping[1]);
        }
        
        // Check each possible substring of s
        for (int i = 0; i <= s.length() - sub.length(); i++) {
            if (isMatch(s, i, sub, map)) {
                return true;
            }
        }
        
        return false;
    }
    
    private boolean isMatch(String s, int start, String sub, Map<Character, Set<Character>> map) {
        for (int i = 0; i < sub.length(); i++) {
            char original = sub.charAt(i);
            char current = s.charAt(start + i);
            
            if (original != current && 
                (!map.containsKey(original) || !map.get(original).contains(current))) {
                return false;
            }
        }
        return true;
    }
}