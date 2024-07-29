class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1; int high=*max_element(piles.begin(),piles.end()); 
        while(low<high)
        {
            int mid=low+(high-low)/2; 
            if(check(piles,mid)<=h) high=mid;
            else low=mid+1;
        }
        return low;
    }
    int check(vector<int>&piles, int mid)
    {
        int sum=0; 
        for(int i=0;i<piles.size();i++)
        {
            sum+=(piles[i]+mid-1)/mid;
        }
        return sum;
    }
};