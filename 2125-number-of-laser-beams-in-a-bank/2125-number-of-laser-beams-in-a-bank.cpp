class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size(); int m=bank[0].size(); vector<int>nums; int prev=0; int cnt=0; int ans=0; 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(bank[i][j]=='1')
                {
                   cnt++;
                }
            }
            if(cnt!=0)
            {
                ans+=prev*cnt;
                prev=cnt;
            }
            cnt=0;
        } 
        return ans;
    }
};