class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> ans; 
        for(int i=1;i<=n;i++)
        {
           ans.push_back(i);
        }
        int remove=0; 
        while(ans.size()>1)
        {
            remove = (remove+k-1)%ans.size(); 
            ans.erase(ans.begin()+remove);
        }
        return ans[0];
    }
};