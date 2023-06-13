class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       unordered_map<int,int> h; int x=0;
        for(int i:nums){
            x+=h[i]++;}
        return x;
    }
};