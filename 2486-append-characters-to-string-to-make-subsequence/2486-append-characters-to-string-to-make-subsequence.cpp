class Solution {
public:
    int appendCharacters(string s, string t) {
        int start=0; int longest =0; 
        while(start<s.length() && longest<t.length())
        {
            if(s[start]==t[longest]) 
            {
                longest++;
            }
             start++;
        }
         return t.length()-longest;
    }
};