class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles; 
        while(numBottles>=numExchange)
        {
            int drankBottles=numBottles/numExchange; 
            int extraBottles=numBottles%numExchange; 
            numBottles=drankBottles+extraBottles; 
            ans+=drankBottles;
        }
        return ans;
    }
};