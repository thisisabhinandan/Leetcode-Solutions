class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> mp1;   
        for(int i=0;i<chars.length();i++)
        {
            mp1[chars[i]]++;
        } int ans=0; 
        for(int i=0;i<words.size();i++)
        {
            string s=words[i];  unordered_map<char,int> mp2=mp1; 
            bool b=true;
            for(int i=0;i<s.length();i++)
            {
                if(mp2[s[i]]!=0)
                {
                   mp2[s[i]]--;
                }
               else
               {
                    b=false; break; 
               }
            }
            if(b==true) ans+=s.length();
        }
        return ans;
    } 
};