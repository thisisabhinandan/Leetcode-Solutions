class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int low=1; int high=n*m; 
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(lessthan(mid,n,m)<k) low=mid+1;
            else high=mid;
        }
        return low;
    }
    int lessthan(int mid,int n,int m)
    {
        int cnt=0;
        for(int i=1;i<=m;i++)
        {
            cnt+=min(mid/i,n);
        }
        return cnt;
    }
};