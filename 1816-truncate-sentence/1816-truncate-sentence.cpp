class Solution {
public:
    string truncateSentence(string s, int k) {
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ') k--; 
            if(k==0) break;
            else temp+=s[i];
        }
        return temp;
    }
};