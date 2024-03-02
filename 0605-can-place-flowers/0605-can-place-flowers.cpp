class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) { int prev=0; int next=0; int count=0;
        for(int i=0;i<flowerbed.size();i++)
        {
            if(flowerbed[i]==0)
            {
             if(i==0|| flowerbed[i-1]==0) prev=0; 
              else prev=1;  
              if(i==flowerbed.size()-1||flowerbed[i+1]==0) next=0;
               else next=1;
                if(prev==0 && next==0)
                {
                    flowerbed[i]=1; 
                    count++;
                }
            }
        }
        return count>=n;
    }
};