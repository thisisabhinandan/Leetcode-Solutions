class Solution {
    public int findPairs(int[] nums, int k) {
        int result=0;
        Map<Integer, Integer> map = new HashMap<>();
        for (int num: nums)
        {
            map.put(num, map.getOrDefault(num,0)+1);
        }

        for (int key: map.keySet())
        {
            int num = key;
            int count = map.get(key);
            if (k>0 && map.containsKey(num+k))
            {
                result++;
            }
            else if (k==0 && count>1) result++;
        }
        return result;

    }
}