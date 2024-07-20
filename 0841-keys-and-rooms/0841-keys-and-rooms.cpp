class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int> q; 
        int n=rooms.size();
        vector<int> vis(n,0);
        q.push(0);
        vis[0]=1; 
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto neighbour:rooms[node])
            {
                if(!vis[neighbour])
                {
                q.push(neighbour);
                vis[neighbour]=1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(vis[i]!=1) return false;
        }
        return true;
    }
};