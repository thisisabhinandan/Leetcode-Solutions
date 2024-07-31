class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        int temp=num/2; 
        for(int i=temp;i<=num;i++)
        {
            int rev=0; 
            int n=i;
            while(n!=0)
            {
                rev=rev*10+n%10;
                n=n/10;
            }
            if(rev+i==num) return true;
        }
        return false;
    }
};