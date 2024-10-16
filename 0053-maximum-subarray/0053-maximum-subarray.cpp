class Solution {
public:
    int maxSubArray(vector<int>& arr) {
     int sum=0; int ans=-1e9; 
       for (int i = 0; i < arr.size(); i++)
        {
            if (sum + arr[i] > 0)
            {
                sum += arr[i];
                ans = max(ans, sum);
            }
            else
            {
                sum = 0;
            }
        }
        if(ans==-1e9) return *max_element(arr.begin(),arr.end()); 
        else return ans;
    }
};