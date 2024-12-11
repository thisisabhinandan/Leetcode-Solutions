class Solution {
    public boolean canArrange(int[] arr, int k) {
        Map<Integer, Integer> mp = new HashMap<>();
        int cnt = 0;

        for (int num : arr) {
            int remainder = ((num % k) + k) % k; // Ensure non-negative remainder
            int complement = (k - remainder) % k;

            if (mp.containsKey(complement)) {
                cnt++;
                mp.put(complement, mp.get(complement) - 1);
                if (mp.get(complement) == 0) {
                    mp.remove(complement);
                }
            } else {
                mp.put(remainder, mp.getOrDefault(remainder, 0) + 1);
            }
        }

        return cnt == arr.length / 2;
    }
}
