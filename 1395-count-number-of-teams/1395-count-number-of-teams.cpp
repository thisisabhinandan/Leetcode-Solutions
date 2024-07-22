class Solution {
public:
    int numTeams(vector<int>& rating) {
       int n=rating.size();
        int teamcount=0;
        for(int i=0;i<n;i++)
        {
            int greaterleft=0; int greaterright=0;
            int lesserleft=0; int lesserright=0; 
            for(int j=i+1;j<n;j++)
            {
                if(rating[j]>rating[i])
                {
                    greaterright++;
                }
                else lesserright++;
            }
            for(int k=0;k<i;k++)
            {
                if(rating[k]>rating[i])
                {
                    greaterleft++;
                }
                else lesserleft++;
            }
            teamcount+=(lesserright*greaterleft)+(lesserleft*greaterright);
        }
        return teamcount;
    }
};

