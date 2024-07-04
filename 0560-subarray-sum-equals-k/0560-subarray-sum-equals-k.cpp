class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        unordered_map<int,int> mp; int sum=0; int ans=0;
        mp[0]=1; 
        for(int i=0;i<a.size();i++)
        {
            sum+=a[i];
            if(mp.find(sum-k)!=mp.end())
            {
                ans+=mp[sum-k];
            }
            mp[sum]++;
        }
        return ans;
    }
};