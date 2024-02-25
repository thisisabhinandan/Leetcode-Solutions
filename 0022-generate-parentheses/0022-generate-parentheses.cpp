class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result; 
        solve(0,0,"",n,result);
        return result;
    }
    void solve(int start, int close, string s, int n, vector<string>& result)
    {
     if(s.length()==2*n) {result.push_back(s);}
     if(start<n) solve(start+1,close,s+'(',n,result);
     if(close<start) solve(start,close+1,s+')',n,result);
    }
};