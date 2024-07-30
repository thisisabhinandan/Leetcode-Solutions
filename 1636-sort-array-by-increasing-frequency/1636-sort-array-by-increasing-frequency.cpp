class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> freq; 
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        sort(nums.begin(),nums.end(), [&](int a, int b)
        {
            if(freq[a]==freq[b]) return a>b;
            else return freq[a]<freq[b];
                 
        });
        return nums;
    }
};