class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int sz=1e9; 
        for(int i=0;i<strs.size();i++)
        {
            string s=strs[i];
            sz=min(sz,(int)s.length());
        } 
        int idx=0; bool ok=true;
        for(int i=0;i<sz;i++)
        {
            for(int j=0;j<strs.size()-1;j++)
            {
                if(strs[j][i]!=strs[j+1][i])
                {
                    ok=false;
                    break;
                }
            }
            if(ok) idx++;
        }
        string str=strs[0];
        return str.substr(0,idx);
    }
};