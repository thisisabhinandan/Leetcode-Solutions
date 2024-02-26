class Solution {
public: 
    
    vector<vector<int>> ans; 
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
       sort(arr.begin(),arr.end());
        vector<int> v; 
        solve(0,target,0,arr,v);
        return ans;
    }
    
    void solve(int ind, int target, int sum, vector<int>& arr, vector<int> v)
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
            if(i>ind && arr[i]==arr[i-1]) continue; 
            v.push_back(arr[i]);
            solve(i+1,target,sum+arr[i],arr,v);
            v.pop_back();
        }
    }
};