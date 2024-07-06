class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
         long long int sum=0; int pos=0;
        for(int i=0;i<chalk.size();i++)
        {
            sum+=chalk[i];
        }
        k=k%sum; 
        for(int i=0;i<chalk.size();i++)
        {
            k=k-chalk[i];
            if(k<0) {return i;} 
        }
        return 0;
    }
};