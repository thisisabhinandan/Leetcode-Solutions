import java.util.TreeMap;

class Solution {
    public int findContentChildren(int[] g, int[] s) {
        TreeMap<Integer, Integer> mp = new TreeMap<>();
        int cnt = 0;

        // Populate the TreeMap with cookie sizes and their frequencies
        for (int cookie : s) {
            mp.put(cookie, mp.getOrDefault(cookie, 0) + 1);
        }

        // Try to satisfy each child
        for (int greed : g) {
            Integer child = mp.ceilingKey(greed); // Find the smallest cookie >= greed

            if (child != null) { // If a suitable cookie is found
                cnt++; // Increase count of satisfied children
                int frequency = mp.get(child);
                
                if (frequency == 1) {
                    mp.remove(child); // Remove the cookie if its frequency becomes zero
                } else {
                    mp.put(child, frequency - 1); // Decrement the frequency of the cookie
                }
            }
        }

        return cnt;
    }
}
