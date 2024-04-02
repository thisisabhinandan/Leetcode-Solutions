class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size(); int ans1=-1e9; int p=1; int s=1; int ans2=-1e9;
        for(int i=0;i<n;i++)
        {
            if (p==0) p=1;
            p=p*nums[i]; 
            ans1= max(ans1,p); 
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s==0) s=1;
            s=s*nums[i]; 
            ans2=max(ans2,s);
        }
        return max(ans1,ans2); 
    }
};

