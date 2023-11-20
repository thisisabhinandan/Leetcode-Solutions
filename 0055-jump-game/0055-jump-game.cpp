class Solution {
public:
    bool canJump(vector<int>& arr) {
   int n=arr.size(); 
    int possible_reach = 0;
    for(int i=0; i<n; i++)
    {
        if(i>possible_reach) return false;
        possible_reach = max(possible_reach, i+arr[i]);
    }
    return true;
}
}; 
