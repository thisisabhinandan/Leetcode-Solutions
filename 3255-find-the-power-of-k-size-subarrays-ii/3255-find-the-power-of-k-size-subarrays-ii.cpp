class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        int consecutive = 1;

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i-1] + 1) {
                consecutive++;
            } else {
                consecutive = 1;
            }

            if (i >= k - 1) {
                if (consecutive >= k) {
                    ans.push_back(nums[i]);
                } else {
                    ans.push_back(-1);
                }
            }
        }

        return ans;
    }
};