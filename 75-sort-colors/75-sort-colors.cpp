class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(); 
        int one=0; 
        int two=0; 
        int zero=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0) zero++;
            else if(nums[i]==1) one++; 
            else two++; 
        }
        for(int i=0;i<zero;i++) nums[i]=0;
        for(int i=0;i<one;i++) nums[i+zero]=1; 
        for(int i=0;i<two;i++) nums[i+zero+one]=2;
        
    }
};