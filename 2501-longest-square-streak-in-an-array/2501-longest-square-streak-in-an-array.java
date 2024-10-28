class Solution {
    public int longestSquareStreak(int[] nums) {
        Set<Integer> st = new HashSet<>();
        for (int i = 0; i < nums.length; i++) {
            st.add(nums[i]);
        }
        int ans = 0; 
        for (int i = 0; i < nums.length; i++) {
            int cnt = 0;
            long start = nums[i];
            while (st.contains((int)start)) {
                cnt++; 
                start = start * start;
                if(start>Integer.MAX_VALUE)
                {
                    break;
                } 
            }
            ans = Math.max(ans, cnt);
        }
        return ans > 1 ? ans : -1;
    }
}
