class Solution {
public:
    int differenceOfSum(vector<int>& a) { int s=0; int s1=0; int n=a.size();
        for(int i=0;i<n;i++)
        {
            s=s+a[i];
            while(a[i]!=0)
            {
                s1=s1+a[i]%10;
                a[i]=a[i]/10;
            }
        } return abs(s1-s);
    
    }
};