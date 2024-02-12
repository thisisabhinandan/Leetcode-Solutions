class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) { int sum=0; int n=arr.size(); int temp=0;
        for(int i=0;i<n;i++)
        {
            temp  = ( (n-i)*i + (n-i) );
            sum=sum+((temp+1)/2)*arr[i];
        }
            return sum; 
    }
};