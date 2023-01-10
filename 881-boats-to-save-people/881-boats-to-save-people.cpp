class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size(); int c=0; 
        sort(people.begin(),people.end()); 
        int l=0; int r=n-1; 
        while(l<=r)
        {
            if((people[l]+people[r])<=limit) { l++; r--; c++; }
            else {
                r--; 
                c++;
            }
        }
        return c;
    }
}; 
// 1 2 2 3 