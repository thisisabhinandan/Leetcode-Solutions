class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end()); 
        int s=0; int cnt=1; 
        for(int i=cost.size()-1;i>=0;i--)
        {
            if(cnt%3!=0) {s+=cost[i];}
            cnt++;
        }
        return s;
    }
};
//9 7 6 5 2 2 