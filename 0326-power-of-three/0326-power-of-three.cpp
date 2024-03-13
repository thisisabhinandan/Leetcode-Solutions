class Solution {
public:
    bool isPowerOfThree(int n) { long long int x=pow(3,31);
        if(n>0&&x%n==0) return true; 
        else return false;
    }
};