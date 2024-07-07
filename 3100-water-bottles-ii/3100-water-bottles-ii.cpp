class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans=numBottles; int cnt=0;
        while(numBottles>=numExchange)
        {
            numBottles=numBottles-numExchange+1;
            numExchange++;  
            cnt++;
        }
        return cnt+ans; 
    }
};