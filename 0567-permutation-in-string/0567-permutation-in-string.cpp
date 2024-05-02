class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length()<s1.length()) return false; 
        unordered_map<char,int> mp; int j=0;
        for(int i=0;i<s1.length();i++) {mp[s1[i]]++;}
        bool flag=true;
        for(int i=0;i<s2.length();i++)
        {
            mp[s2[i]]--;
             
            if(i-j+1==s1.length())
            {
                for(int k=0;k<s1.length();k++)
                {
                    if(mp[s1[k]]!=0)
                    {flag=false; break;}
                    else flag=true;
                }
                if(flag==true) return true; 
                mp[s2[j]]++;
                j++;
            }
        }
        return false;
    }
};