class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int cnt=0; 
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                string s=""; string r="";
                r=nums[j]+nums[i];
                s=nums[i]+nums[j];
                if(s==target) 
                {
                    cnt++;
                }
                if(r==target)
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};