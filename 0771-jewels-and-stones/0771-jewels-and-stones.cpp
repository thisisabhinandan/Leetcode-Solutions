class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp; int ans=0;
        for(int i=0;i<jewels.length();i++)
        {
             mp[jewels[i]]++;
        }
        for(int i=0;i<stones.length();i++)
        {
            if(mp.find(stones[i])!=mp.end())
            {
                ans++;
            }
        }
        return ans;
        
    }
};