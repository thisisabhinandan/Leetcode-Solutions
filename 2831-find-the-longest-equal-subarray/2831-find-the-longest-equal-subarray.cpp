class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        int j = 0; // Left end of the sliding window
        unordered_map<int, int> mp; // Frequency map
        int maxLength = 0; // Store the result
        int freq = 0; // Maximum frequency in the current window

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++; // Add the current element to the frequency map
            freq = max(freq, mp[nums[i]]); // Update the max frequency in the window

            // Check if the window is valid
            while ((i - j + 1) - freq > k) {
                mp[nums[j]]--; // Remove the leftmost element from the frequency map
                j++; // Shrink the window
            }

            // Update the result
            maxLength = max(maxLength, freq);
        }

        return maxLength;
    }
};
