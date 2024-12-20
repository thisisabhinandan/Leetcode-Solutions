class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int> mp; int j=0; int ans=0;
        for(int i=0;i<fruits.size();i++)
        {
            mp[fruits[i]]++;
            while(mp.size()>2)
            {
                mp[fruits[j]]--;
                if(mp[fruits[j]]==0)
                {
                    mp.erase(fruits[j]);
                }
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans; 
    }
};