class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses); 
        vector<int> indegree(numCourses,0);
        int cnt=0;
        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]]++; //course 
        }
        queue<int> q; 
        for(int i=0;i<numCourses;i++)
        {
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            cnt++;
            for(int neighbour:adj[node])
            {
                indegree[neighbour]--;
                if(indegree[neighbour]==0)
                {
                    q.push(neighbour);
                }
            }
        }
        return cnt==numCourses;
    }
};