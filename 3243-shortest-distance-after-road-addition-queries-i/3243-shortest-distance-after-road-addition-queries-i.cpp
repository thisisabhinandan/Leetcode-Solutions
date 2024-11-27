class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> adj(n+1); 
        vector<int> res; 
        for(int i=0;i<n-1;i++)
        {
            adj[i].push_back(i+1);
        }
        for(int i=0;i<queries.size();i++)
        {
           adj[queries[i][0]].push_back(queries[i][1]);
           int dist=bfs(adj,n);
           res.push_back(dist);
        }
        return res;
    }
    int bfs(vector<vector<int>>& adj,int n)
    {
        queue<int> q;
        vector<int> dist(n,-1);
        q.push(0);
        dist[0]=0;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(int neighbour:adj[node])
            {
                if(dist[neighbour]==-1)
                {
                    dist[neighbour]=dist[node]+1;
                    q.push(neighbour);
                }
                if(neighbour==n-1)
                {
                    return(dist[neighbour]);
                }
            }
        }
        return -1;
    }
};