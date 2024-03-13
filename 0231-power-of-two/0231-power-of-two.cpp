class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long int x=pow(2,31);
        if(n>0 && x%n==0) return true; 
        else return false;
    }
};