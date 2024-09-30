class Solution {
    public int numTriplets(int[] nums1, int[] nums2) {
        int ans = 0;
        Map<Long, Integer> mp1 = new HashMap<>();
        Map<Long, Integer> mp2 = new HashMap<>();
        
        for (int i = 0; i < nums2.length; i++) {
            for (int j = i + 1; j < nums2.length; j++) {
                long product = (long) nums2[i] * nums2[j];
                mp2.put(product, mp2.getOrDefault(product, 0) + 1);
            }
        }
        
        for (int i = 0; i < nums1.length; i++) {
            for (int j = i + 1; j < nums1.length; j++) {
                long product = (long) nums1[i] * nums1[j];
                mp1.put(product, mp1.getOrDefault(product, 0) + 1);
            }
        }
        
        for (int num : nums1) {
            long square = (long) num * num;
            if (mp2.containsKey(square)) {
                ans += mp2.get(square);
            }
        }
        
        for (int num : nums2) {
            long square = (long) num * num;
            if (mp1.containsKey(square)) {
                ans += mp1.get(square);
            }
        }
        
        return ans;
    }
}
