class Solution {
public:
    bool isPalindrome(string str) {
        string s="";
        for(int i=0;i<str.length();i++)
        {
            if(isalnum(str[i])) s+=tolower(str[i]);
        }
        int l=0; int r=s.length()-1;
        while(l<=r)
        {
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};