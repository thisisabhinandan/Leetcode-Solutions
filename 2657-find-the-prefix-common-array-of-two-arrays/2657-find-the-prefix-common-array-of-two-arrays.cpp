class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans; unordered_set<int> st1; unordered_set<int> st2;
        int cnt=0; 
        for(int i=0;i<A.size();i++)
        {
            st1.insert(A[i]);
            st2.insert(B[i]);
            if(A[i]==B[i])
            {
                cnt++;
                ans.push_back(cnt);
                continue;
            }
            if(st2.find(A[i])!=st2.end())
            {
                cnt++;
            }
            if(st1.find(B[i])!=st1.end())
            {
                cnt++;
            }
            ans.push_back(cnt); 
        }
        return ans; 
    }
};