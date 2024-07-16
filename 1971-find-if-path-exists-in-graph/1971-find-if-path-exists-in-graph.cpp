class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n); 
        for(auto edge:edges)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        queue<int> q; 
        vector<int> visited(n,0);
        visited[source]=1; 
        q.push(source); 
        while(!q.empty())
        {
            int node=q.front();
            q.pop(); 
            if(node==destination) return true;
            for(int neighbour:adj[node])
            {
                if(!visited[neighbour])
                {
                    visited[neighbour]=1;
                    q.push(neighbour); 
                }
            }
        }
        return false;
    }
};