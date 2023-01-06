class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();  int x=0;
        sort(costs.begin(),costs.end()); int i=0;
        for(i=0;i<n;i++)
        {  
           if ((coins-costs[i])>=0) { coins=coins-costs[i]; x++;}
          
        }
        return x;
    }
};