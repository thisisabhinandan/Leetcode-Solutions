class Solution {
public:
    int waysToSplitArray(vector<int>& nums) { long long int n=nums.size();
         vector<long long int> prefix(nums.size()); prefix[0]=nums[0]; 
        for(int i=1;i<nums.size();i++)
        {
            prefix[i]=nums[i]+prefix[i-1];
        }
         long long int ans=0; 
        for(int i=0;i<n-1;i++)
        {     
            if(prefix[n-1]-prefix[i]<=prefix[i]) {ans++;}
        }
        return ans;
    }
};
