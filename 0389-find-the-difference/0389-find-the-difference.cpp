class Solution {
public:
    char findTheDifference(string s, string t) {
      int ss=0; int ts=0; 
       for(int i=0;i<s.length();i++)
       {
           ss+=s[i];
       }
         for(int i=0;i<t.length();i++)
       {
           ts+=t[i];
       }
        return ts-ss;
    }
};