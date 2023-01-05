class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(); int i=0; int j=n-1; 
         int a=0;  
        while(i<j)
        { int x=0; 
            x=min(height[i],height[j]); 
            a=max(a,x*(j-i)); 
         if (height[j]>height[i]) i++; 
         else j--; 
       }
        return a;
    }
};