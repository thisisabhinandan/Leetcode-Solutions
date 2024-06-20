class Solution {
    public String shortestCompletingWord(String licensePlate, String[] words) {
        // Create a frequency map for the characters in the license plate
        Map<Character, Integer> licenseMap = new HashMap<>();
        for (int i = 0; i < licensePlate.length(); i++) {
            char c = Character.toLowerCase(licensePlate.charAt(i));
            if (c >= 'a' && c <= 'z') {
                licenseMap.put(c, licenseMap.getOrDefault(c, 0) + 1);
            }
        }

        String result = null;
        for (String word : words) {
            if (isValidCompletingWord(word, licenseMap)) {
                if (result == null || word.length() < result.length()) {
                    result = word;
                }
            }
        }

        return result;
    }

    private boolean isValidCompletingWord(String word, Map<Character, Integer> licenseMap) {
        // Create a frequency map for the characters in the word
        Map<Character, Integer> wordMap = new HashMap<>();
        for (int i = 0; i < word.length(); i++) {
            char c = Character.toLowerCase(word.charAt(i));
            wordMap.put(c, wordMap.getOrDefault(c, 0) + 1);
        }

        // Check if the word contains all the characters in the licenseMap with required frequency
        for (Map.Entry<Character, Integer> entry : licenseMap.entrySet()) {
            char key = entry.getKey();
            int count = entry.getValue();
            if (wordMap.getOrDefault(key, 0) < count) {
                return false;
            }
        }

        return true;
    }

}
