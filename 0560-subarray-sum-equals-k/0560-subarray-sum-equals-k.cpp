class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int n=a.size(); int psum=0; int cnt=0;  
        unordered_map<int,int>mp; 
        for(int i=0;i<n;i++)
        {
            psum+=a[i];
            if(psum==k) cnt++;
            
            if(mp.find(psum-k)!=mp.end())
            {
                cnt+=mp[psum-k]; 
            }
            mp[psum]++;
        }
        return cnt; 
    }
};