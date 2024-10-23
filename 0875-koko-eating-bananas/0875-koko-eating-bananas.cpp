class Solution {
public:
    bool iseat(int k , int h , vector<int>&piles)
    {   long long  cnt=0;
        for (int i=0 ; i< piles.size();i++)
        {
           if(piles[i]%k)cnt++;
           cnt+=piles[i]/k;
        }
        return h>=cnt;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low= 1 , high=1e9,ans=INT_MAX;
        sort(piles.begin(), piles.end());
        while(high>=low)
        {
            int mid=(low+high)/2;
            if(iseat(mid, h,piles))
            {     
                ans =min (ans ,mid);
                  high=mid-1;   
            }
            else
            {
               low=mid+1;
            }
        }
        return ans ;
    }
};