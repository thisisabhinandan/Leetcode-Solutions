class Solution {
public:
    string defangIPaddr(string s) { int n=s.length(); string ans="";
       for(int i=0;i<n;i++)
       {
          if(s[i]=='.') ans=ans+"[.]";
          else ans=ans+s[i];
       }
        
                                         return ans;
    }
};