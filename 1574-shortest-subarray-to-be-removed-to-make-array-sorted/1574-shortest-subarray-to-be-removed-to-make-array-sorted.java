class Solution {
    public int findLengthOfShortestSubarray(int[] arr) {
        int n = arr.length;
        int l = 0;
        int r = n - 1;

        // Step 1: Find the longest non-decreasing prefix
        while (l < n - 1 && arr[l] <= arr[l + 1]) {
            l++;
        }

        // If the entire array is sorted, return 0
        if (l == n - 1) return 0;

        // Step 2: Find the longest non-decreasing suffix
        while (r > 0 && arr[r - 1] <= arr[r]) {
            r--;
        }

        // Step 3: Minimum length to remove between the prefix and suffix
        int result = Math.min(n - l - 1, r); // Remove either prefix or suffix

        // Step 4: Try to merge elements from the prefix and suffix
        int i = 0, j = r;
        while (i <= l && j < n) {
            if (arr[i] <= arr[j]) {
                result = Math.min(result, j - i - 1);
                i++;
            } else {
                j++;
            }
        }

        return result;
    }
}
