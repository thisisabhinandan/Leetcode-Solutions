class Solution {
public:
    int maxArea(vector<int>& height) { int n=height.size();
        int r=n-1; int l=0; int maxi=0; 
        while(l<r)
        {    maxi=max(maxi,(r-l)*min(height[l],height[r]));
            if(height[l]<height[r]) l++;   
            else r--;
        }
        return maxi;
    }
};