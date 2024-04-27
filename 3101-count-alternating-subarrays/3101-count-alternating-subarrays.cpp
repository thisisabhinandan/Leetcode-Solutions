class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) { long long int j=0; long long int ans=1; 
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]) { j=i;}
            ans+=i-j+1; 
        }
        
         return ans; 
    }
};