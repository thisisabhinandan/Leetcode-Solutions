class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int mini=*min_element(prices.begin(),prices.end());
        int smini=1e9; int cnt=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]==mini)
            {
                cnt++;
                if(cnt>1)
                {
                 if(2*mini<=money)
                {
                    return money-2*mini;
                }
                else return money;   
                }
            }
         else smini=min(smini,prices[i]);
        }
        if(mini+smini<=money) return money-mini-smini;
        else return money; 
    }
};