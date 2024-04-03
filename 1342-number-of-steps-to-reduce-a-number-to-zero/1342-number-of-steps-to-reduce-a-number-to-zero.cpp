class Solution {
public:
    int numberOfSteps(int n) { int i=0;
       while(n!=0)
       {
           if(n%2==0) n=n/2; 
           else n--; 
           i++;
       }
        return i;
    }
};