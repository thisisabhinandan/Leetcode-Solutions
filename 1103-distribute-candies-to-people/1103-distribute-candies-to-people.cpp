class Solution {
public:
    vector<int> distributeCandies(int candies, int n) {
        vector<int> ans(n,0); int i=0;
        while(candies>0) 
        { ans[i%n]+=min(candies,i+1);
           candies=candies-i-1; 
          i++;
        }
    return ans;
    }
};