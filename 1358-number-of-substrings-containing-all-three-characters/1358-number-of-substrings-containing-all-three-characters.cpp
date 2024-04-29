class Solution {
public:
    int numberOfSubstrings(string s) { 
        int a=0; int b=0; int c=0;
        int j=0; int ans=0; long long int n=s.length();  long long int tot=(n+1)*n/2;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a') {a++;}
            else if(s[i]=='b') {b++;}
            else if(s[i]=='c') {c++;}
            while(a>0 && b>0 && c>0)
            {
                if(s[j]=='a')
                {
                    a--;
                }
                 else if(s[j]=='b')
                {
                    b--;
                }
                else if(s[j]=='c')
                {
                    c--;
                }
                j++;
            }
            ans+=i-j+1;
        }
        return tot - ans;
    }
};