class Solution {
public:
    vector<vector<int>> ans;
    void solve(int ind, int target, vector<int>& arr, int sum, vector<int>& v)
    {
        
        if(sum==target)
        {
            ans.push_back(v); return;
        }
        
        if(sum>target)
            
        {
            return;
        }
        
        for(int i=ind;i<arr.size();i++)
        {
            v.push_back(arr[i]);
            solve(i,target,arr,sum+arr[i],v); 
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        
        vector<int> v;
        solve(0,target,arr,0,v);
        return ans;
    }
};