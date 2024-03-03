class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) { int n=special.size();
        sort(special.begin(),special.end()); 
         int ans1=0; int ans2=0; int cnt=0;
        ans1= max(abs(bottom-special[0]),abs(top-special[n-1]));
        for(int i=1;i<n;i++)
        {    cnt=special[i]-special[i-1]-1;
            ans2 = max (cnt,ans2);
}
       return max(ans1,ans2);
    }
};