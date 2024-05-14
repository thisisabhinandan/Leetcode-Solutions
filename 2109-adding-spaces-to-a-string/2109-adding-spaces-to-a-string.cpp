class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int i=0;
        int j=0;
        string ans;
        int n=s.size();
        for(int i=0;i<n;i++){
            //if i meets the index in spaces
            //add space 
            //and increment j
            if(j<spaces.size() && i==spaces[j]){
                ans+=" ";
                j++;
            }
            //add the alphabets to the final variable
            ans+=s[i];
        }
        return ans;
    }
};