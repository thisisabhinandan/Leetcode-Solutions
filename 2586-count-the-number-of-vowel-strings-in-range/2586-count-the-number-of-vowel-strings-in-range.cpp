class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt=0;
        for(int i=left;i<=right;i++)
        {
            string s=words[i];
            int n=s.length()-1;
            if((s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='u'||s[0]=='o') && (s[n]=='a'||s[n]=='e'||s[n]=='i'||s[n]=='u'||s[n]=='o'))
            {
                cnt++;
            }
            
        }
        return cnt;
    }
};