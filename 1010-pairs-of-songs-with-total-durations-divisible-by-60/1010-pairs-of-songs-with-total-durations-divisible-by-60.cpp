class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
       map<int,int> mp; int cnt=0; 
        for(int i=0;i<time.size();i++)
        {
            int rem=(60-time[i]%60)%60; 
            if(mp.find(rem)!=mp.end())
            {
                cnt+=mp[rem];
            }
            mp[time[i]%60]++;
        }
        return cnt;
    }
};