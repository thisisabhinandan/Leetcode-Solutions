class Solution {
public:
    int minMoves(vector<int>& nums) { int n=nums.size(); int r=0;
        int min=*min_element(nums.begin(),nums.end()); 
        for(int i=0;i<n;i++)
        {
            r+=nums[i]-min;
        }
                                     return r;
        
    }
};