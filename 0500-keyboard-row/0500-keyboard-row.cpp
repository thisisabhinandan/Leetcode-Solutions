class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string s1="QWERTYUIOPqwertyuiop";
        string s2="ASDFGHJKLasdfghjkl";
        string s3="ZXCVBNMzxcvbnm";
        
        unordered_map<char,int>mp1,mp2,mp3; vector<string> ans;
        
        for(int i=0;i<s1.length();i++) {mp1[s1[i]]++;}
        for(int i=0;i<s2.length();i++) {mp2[s2[i]]++;}
        for(int i=0;i<s3.length();i++) {mp3[s3[i]]++;}
        
        for(int i=0;i<words.size();i++)
        {
            string s=words[i]; 
            
            int c1=0; int c2=0; int c3=0;
        
            for(int j=0;j<s.length();j++)
            {
                if(mp1.find(s[j])!=mp1.end()) c1++;
                if(mp2.find(s[j])!=mp2.end()) c2++;
                if(mp3.find(s[j])!=mp3.end()) c3++;
            }
            
            if(c1==s.length() || c2==s.length() || c3==s.length()) ans.push_back(s);
        }
        return ans;
    }
};