class Solution {
public:
    int countDigits(int n) { int ans=0;
        int num=n;
        while(n!=0)
        {   int x=n%10; 
            if((num%x)==0) ans++; 
            n=n/10;
        }
        return ans;
    }
};