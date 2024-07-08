class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size(); int m=bank[0].size(); vector<int>nums;  int cnt=0; int ans=0; 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(bank[i][j]=='1')
                {
                   cnt++;
                }
            }
            if(cnt>0) nums.push_back(cnt);
            cnt=0;
        } 
        for(int i=1;i<nums.size();i++)
        {
            ans+=nums[i-1]*nums[i];
        }
        return ans;
    }
};