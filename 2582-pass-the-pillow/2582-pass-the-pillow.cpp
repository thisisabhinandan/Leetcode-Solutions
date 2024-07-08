class Solution {
public:
    int passThePillow(int n, int time) {
        int fwd=true; int i=1; 
        while(time--)
        {
            if(fwd==true)
            {
                i++;
                if(i==n) 
                {
                    fwd=false;
                }
            }
            else{
                i--;
                if(i==1)
                {
                    fwd=true;
                }
            }
        }
        return i;
    }
};