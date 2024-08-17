class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        int idx = -1;  // Track where consecutive sequence breaks

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] != nums[i-1] + 1) {
                idx = i;
            }

            if (i >= k - 1) {
                int j = i - k + 1;
                if (j < idx) {
                    ans.push_back(-1);
                } else {
                    ans.push_back(nums[i]);
                }
            }
        }

        return ans;
    }
};