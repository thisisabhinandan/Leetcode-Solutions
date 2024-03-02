class Solution {
public:
    int maxDistance(vector<int>& colors) { int l=0; int r=colors.size()-1; int ans=0; int ans1=0;
        while(l<=r)
        {
            if(colors[l]!=colors[r]) 
            {
                ans=max(ans,r-l); 
               
            }
            r--; 
        }int l1=0; int r1=colors.size()-1;
        while(l1<=r1)
        {
            if(colors[l1]!=colors[r1]) 
            {
                ans1=max(ans1,r1-l1); 
               
            }
            l1++; 
        }
        return max(ans1,ans);
                                         
    }
};