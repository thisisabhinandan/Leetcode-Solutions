#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        // Step 1: Initialize the adjacency list
        vector<vector<pair<int, int>>> adj(n);
        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            adj[u].emplace_back(v, w);
            adj[v].emplace_back(u, w);
        }

        int minReachable = INT_MAX;
        int resultCity = -1;

        // Step 2: Perform BFS for each city
        for (int i = 0; i < n; ++i) {
            vector<int> dist(n, INT_MAX);
            queue<pair<int, int>> q;
            q.push({i, 0});
            dist[i] = 0;

            while (!q.empty()) {
                int curr = q.front().first;
                int currDist = q.front().second;
                q.pop();

                for (const auto& neighbor : adj[curr]) {
                    int next = neighbor.first;
                    int weight = neighbor.second;

                    if (currDist + weight < dist[next] && currDist + weight <= distanceThreshold) {
                        dist[next] = currDist + weight;
                        q.push({next, dist[next]});
                    }
                }
            }

            // Count reachable cities within the distance threshold
            int reachableCount = 0;
            for (int j = 0; j < n; ++j) {
                if (i != j && dist[j] <= distanceThreshold) {
                    ++reachableCount;
                }
            }

            // Step 3: Find the city with the smallest number of reachable cities
            // If there is a tie, choose the city with the greatest number
            if (reachableCount < minReachable || (reachableCount == minReachable && i > resultCity)) {
                minReachable = reachableCount;
                resultCity = i;
            }
        }

        return resultCity;
    }
};
