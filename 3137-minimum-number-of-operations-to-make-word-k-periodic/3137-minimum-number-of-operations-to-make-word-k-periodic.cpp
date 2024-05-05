class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
          unordered_map<string,int> mp; int tot=0; int freq=0;
        for(int i=0;i<word.length();i+=k)
        {
            string t=word.substr(i,k);
            mp[t]++;
            freq=max(freq,mp[t]);
            tot++;
        }
        return tot-freq;
    }
};