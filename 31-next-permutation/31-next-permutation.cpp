class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int l,r;
        for(l=n-2;l>=0;l--)                           // find decreasing sequence
        {
            if(nums[l]<nums[l+1]) break;
        }
        if(l<0) reverse(nums.begin(),nums.end());
        else
        {
            for(r=n-1;r>l;r--)                       // find rightmost successor to pivot
            {
                if(nums[r]>nums[l]) break;
            }
            swap(nums[l],nums[r]);                  // swap l,r
            
            reverse(nums.begin()+l+1,nums.end());   // reverse from l+1 to end
        }
    }
};

/*
3 4 5 2 1 5 4 2 

find the not increasing seq from left to right, set it as pivot element, 1 is our pivot 

3 4 5 2 '1' 5 4 2 

find the rightmost greater than pivot, that is 2, swap it

3 4 5 2 2 5 4 1 

reverse the rest of the seq from pivot 

3 4 5 2 2 1 4 5

ans- [3,4,5,2,2,1,4,5]


2 3 6 4 5 1

2 3 6 '4' 5 1 

2 3 6 5 4 1 

2 3 6 5 1 4 ans

5 4 3 2 1 



*/