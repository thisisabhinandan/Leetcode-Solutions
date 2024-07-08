class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> tmp; int cnt=t.size(); int j=0; 
        int minlen=1e9; int minstart=0;
        for(int i=0;i<t.length();i++)
        {
           tmp[t[i]]++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(tmp[s[i]]>0)
            {
                cnt--;
            }
            tmp[s[i]]--;
            while(cnt==0)
            {
                if(i-j+1<minlen)
                {
                    minstart=j;
                    minlen=i-j+1;
                }
                tmp[s[j]]++;
                if(tmp[s[j]]>0) cnt++;
                j++;
            }
        }
        if(minlen==1e9) return "";
        else return s.substr(minstart,minlen);
    }

};