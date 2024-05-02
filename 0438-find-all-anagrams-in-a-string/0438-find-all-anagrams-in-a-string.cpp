class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>mpp;
        vector<int>ans;
        for(auto it : p){
            mpp[it]--;
        }
        for(int i=0,j=0;j<s.size();j++){
            mpp[s[j]]++;
            if(j-i+1==p.size()){
                bool flag=1;
                for(auto it : mpp){
                    if(it.second!=0){
                        flag=0;break;
                    }
                }
                if(flag){
                    ans.push_back(i);
                }
                mpp[s[i]]--;
                i++;
            }
        }
        return ans;
    }
};