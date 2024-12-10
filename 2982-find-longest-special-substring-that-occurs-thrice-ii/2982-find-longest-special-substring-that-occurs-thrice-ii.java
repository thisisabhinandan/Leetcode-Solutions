class Solution {
    public int maximumLength(String s) {
        Map<Character, List<Integer>> cnt = new HashMap<>();
        int n = s.length();

        // 统计连续字符段的长度
        int i = 0;
        while (i < n) {
            char currentChar = s.charAt(i);
            int j = i;
            while (j < n && s.charAt(j) == currentChar) {
                j++;
            }
            cnt.computeIfAbsent(currentChar, x -> new ArrayList<>()).add(j - i);
            i = j;
        }

        int lo = 1, hi = n - 1, res = -1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (check(cnt, mid)) {      
                lo = mid + 1;      
            } else {
                hi = mid - 1;
            }
        }

        return lo-1 == 0 ? -1 : lo-1;
    }
    private boolean check(Map<Character, List<Integer>> cnt, int length) {
        for (List<Integer> vec : cnt.values()) {
            int count = 0;
            for (int x : vec) {
                if (x >= length) {
                    count += x - length + 1;
                }
            }
            if (count >= 3) {
                return true;
            }
        }
        return false;
    }
}
