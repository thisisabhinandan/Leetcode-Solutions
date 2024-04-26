class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long int> ans;
        long long int x=num/3; 
        if(num%3!=0) return {}; 
        else return {x-1,x,x+1};
    }
};