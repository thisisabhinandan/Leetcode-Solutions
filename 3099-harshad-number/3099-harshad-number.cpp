class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) { int ans=0; int a=0; int y=x;
       while(x!=0)
       {
           a=x%10;
           ans+=a;
           x=x/10; 
       }
       if(y%ans==0) return ans;
       else return -1;
    }
};