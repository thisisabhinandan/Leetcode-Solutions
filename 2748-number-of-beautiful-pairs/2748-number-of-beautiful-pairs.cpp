class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int ans=0; 
        for(int i=0;i<nums.size();i++)
        {
            int n = 0; 
              while (nums[i] != 0) { 
                n = n * 10 + nums[i] % 10; 
                nums[i] = nums[i] / 10; 
                     } 
            for(int j=i+1;j<nums.size();j++)
            {

                if(__gcd(n%10,nums[j]%10)==1) {ans++;}
            }
        }
        return ans;
    }
};