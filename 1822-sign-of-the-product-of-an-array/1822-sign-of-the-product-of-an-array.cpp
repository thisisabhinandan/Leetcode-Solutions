class Solution {
public:
    int arraySign(vector<int>& a) { int n=a.size(); int c=0; int k=0; 
        for(int i=0;i<n;i++)
        {
            if(a[i]==0) c++;
            if(a[i]<0)  k++;
        }
        if(c>=1) return 0; 
        else if (k%2!=0) return -1; 
        else return 1;
    }
};