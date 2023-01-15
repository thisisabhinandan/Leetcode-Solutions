class Solution {
public:
    void sortColors(vector<int>& a) {
        int n=a.size(); 
        int l=0; int h=n-1; 
        int m=0;
        while(m<=h)
        {
            if (a[m]==0) {swap(a[l],a[m]); l++;m++;}
            else if(a[m]==2) {swap(a[m],a[h]); h--;}
            else  m++;
        }
        
    }
};