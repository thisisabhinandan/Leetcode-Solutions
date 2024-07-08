class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        vector<vector<int>>temp1 = mat; int n=mat.size();
        reverse(temp1.begin(),temp1.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(temp1[i][j],temp1[j][i]);
            }
        }
        vector<vector<int>>temp2=temp1;
         reverse(temp2.begin(),temp2.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(temp2[i][j],temp2[j][i]);
            }
        }
        vector<vector<int>>temp3=temp2;
         reverse(temp3.begin(),temp3.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(temp3[i][j],temp3[j][i]);
            }
        }
        return mat==target||temp1==target||temp2==target||temp3==target; 
    }
};