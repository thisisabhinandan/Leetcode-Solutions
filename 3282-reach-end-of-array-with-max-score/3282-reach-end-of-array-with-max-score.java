import java.util.List;

class Solution {
    public long findMaximumScore(List<Integer> nums) {
        long ans = 0; // To store the result
        int k = 0; // Start from index 0
        int n = nums.size(); // Total size of nums

        for (int i = 1; i < n; i++) {
            // Jump to the nearest greater element
            if (nums.get(i) > nums.get(k)) {
                ans += (i - k) * (long) nums.get(k);  // Calculate score for the jump
                k = i;  // Move to the new index where nums[i] is larger
            }
        }

        // Always include the final jump to the last element
        ans += (n - 1 - k) * (long) nums.get(k);

        return ans;
    }
}
