class Solution {
public:
    int maximumGroups(vector<int>& grades) {  int n=grades.size();
       int s=0; int x=0;
        while(s+x<n)
        {
            x++;
            s+=x;
        }
        return x;
    }
};