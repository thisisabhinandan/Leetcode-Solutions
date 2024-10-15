class Solution {
    public long minimumSteps(String s) {
        int j = 0;
        long cnt = 0; 
        char[] strs = s.toCharArray();

        for (int i = 0; i < strs.length; i++) {
            if (strs[i] != '1') {
                cnt+=i-j;
                swap(strs, i, j);
                j++;
            }
        }
        return cnt;
    }
    public void swap(char[] strs, int i, int j) {
        char ch = strs[i];
        strs[i] = strs[j];
        strs[j] = ch;
    }
}
