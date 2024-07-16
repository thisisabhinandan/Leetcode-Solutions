class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int cnt=0;
        int n=isConnected.size();
        vector<int> visited(n,0);
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                 cnt++;
                 bfs(isConnected,visited,i);
            }
        }
        return cnt;
    }
    void bfs(vector<vector<int>>& isConnected,vector<int>& visited,int node)
    {
        queue<int>q; 
        visited[node]=1;
        q.push(node);
        while(!q.empty())
        {
            node=q.front();
            q.pop();
            for(int neighbour=0;neighbour<isConnected.size();neighbour++)
            {
                if(isConnected[node][neighbour] && !visited[neighbour])
                {
                    visited[neighbour]=1; 
                    q.push(neighbour);
                }
            }
        }
    }
};