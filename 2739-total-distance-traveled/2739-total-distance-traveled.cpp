class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
      int dist=0; 
      while(mainTank>0)
      {
          dist++; 
          mainTank--;
          if(dist%5==0 && additionalTank!=0)
          {
              mainTank++; 
              additionalTank--;
          }
         
      }
        return dist*10;
    }
};