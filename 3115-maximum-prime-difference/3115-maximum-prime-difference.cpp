class Solution {
public:
       bool isPrime(int n) {
        if (n < 2) {
            return false;
        }
        if (n == 2) {
            return true;
        }
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(isPrime(nums[i])) nums[i]=1; 
            else nums[i]=0; 
        }
     int first=1e9; int last=-1e9; 
      for(int i=0;i<nums.size();i++)
      {
          if(nums[i]==1) {first=min(first,i); last=max(last,i);}
      }
        return abs(first-last);
    }
};