class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) { int n=nums.size(); 
        vector<int> ans(n); vector<int>odd; vector<int> even; 
        for(int i=0;i<n;i++)
        {
            if(i%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        sort(odd.rbegin(),odd.rend());
        sort(even.begin(),even.end());
        int k=1; int j=0;
        for(int i=0;i<odd.size();i++)
        {
            nums[k]=odd[i];
            k=k+2;
        }
        for(int i=0;i<even.size();i++)
        {
            nums[j]=even[i];
            j+=2;
        }
        return nums;
    }
};