class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> st;
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            int rev = 0;
            while (temp != 0) {
                int r = temp % 10;
                rev = rev * 10 + r;
                temp = temp / 10;
            }
            st.insert(rev);
        }
        return st.size();
    }
};