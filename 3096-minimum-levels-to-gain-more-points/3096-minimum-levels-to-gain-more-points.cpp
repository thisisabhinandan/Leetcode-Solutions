class Solution {
public:
    int minimumLevels(vector<int>& a) { int psum=0; int ans=-1; 
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==0) a[i]=-1;
            psum+=a[i];
        } int sum=0;
        for(int i=0;i<a.size()-1;i++)
        {
            sum+=a[i];
            if(sum>psum-sum)  return i+1;
        }
        return -1;    
        
    }
};