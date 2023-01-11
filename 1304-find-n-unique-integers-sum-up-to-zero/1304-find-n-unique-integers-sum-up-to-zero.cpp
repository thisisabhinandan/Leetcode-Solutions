class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> A(n);
        if(n==2)
        {
            vector<int> A={-1,1};
            return A;
        }
        long long int x=(n-1)*(n-2)/2; 
        for(int i=0;i<n-1;i++)
        {
            A[i]=i;
        }
        A[n-1]=-1*x; 
        return A;
        
	}
        
};