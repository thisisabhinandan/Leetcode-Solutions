class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> mp; char ch='a'; 
        for(int i=0;i<key.length();i++)
        {
           if(mp.find(key[i]) == mp.end() && key[i]!=' ')  {mp[key[i]]=ch;  ch++;} 
        }
        string ans=""; 
        for(int i=0;i<message.length();i++)
        {
            if(message[i]==' ') ans+=' ';
            else ans+=mp[message[i]];
        }
        return ans;
    }
};