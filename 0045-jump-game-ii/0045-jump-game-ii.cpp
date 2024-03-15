class Solution {
public:
    int jump(vector<int>& arr) {
         int n=arr.size(); 
    int possible_reach = 0;
    int current =0; 
    int jumps=0;
    for(int i=0; i<n-1; i++)
    {
        possible_reach = max(possible_reach, i+arr[i]);
        if(i==current)
        {
            current=possible_reach;
            jumps++;
        }
        
    }
    return jumps;
    }
};