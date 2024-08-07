class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        int cnt=0;
        for(int i=0;i<=200;i++)
        {
            for(int j=0;j<=200;j++)
            {
                for(int k=0;k<circles.size();k++)
                {
                    int x=circles[k][0]; int y=circles[k][1]; int r=circles[k][2];
                    if((i-x)*(i-x)+(j-y)*(j-y)<=(r*r))
                    {
                        cnt++;
                        break;
                    }
                }
            }
        }
        return cnt;
    }
};