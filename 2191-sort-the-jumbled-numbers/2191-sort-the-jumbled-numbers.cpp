class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        unordered_map<int,int> mp; 
        for(int i=0;i<mapping.size();i++)
        {
            mp[i]=mapping[i];
        }
        vector<pair<int,int>> newnums;
        for(int i=0;i<nums.size();i++)
        {
            int temp=nums[i];
            int newnum=0;
            int p=1;
            if(temp == 0) {
                newnum = mp[0];
            } else {
                while(temp>0)
                {
                    int r=temp%10; 
                    int k=mp[r]; 
                    newnum=k*p + newnum;
                    p=p*10;
                    temp=temp/10;
                }
            }
            newnums.push_back({newnum,i});
        }
        stable_sort(newnums.begin(),newnums.end());
        vector<int> ans; 
        for(int i=0;i<newnums.size();i++)
        {
            ans.push_back(nums[newnums[i].second]);
        }
        return ans;
    }
};