class Solution {
public:
    int passThePillow(int n, int time) {
        int pos=1; 
        bool fwd=true; 
        for(int i=1;i<=time;i++)
        {
            if(fwd==true)
            {
                pos++; 
                if(pos==n)
                {
                    fwd=false;
                }
            }
            else
            {
                pos--;
                if(pos==1)
                {
                    fwd=true;
                }
            }
        }
        return pos;
    }
};