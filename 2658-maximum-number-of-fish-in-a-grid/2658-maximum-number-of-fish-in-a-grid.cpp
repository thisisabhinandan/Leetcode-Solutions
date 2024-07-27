#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int ans = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] != 0) {
                    ans = max(ans, bfs(grid, i, j));
                }
            }
        }
        return ans;
    }

    int bfs(vector<vector<int>>& grid, int i, int j) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        int sum = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        vis[i][j] = 1;
        q.push({i, j});
        sum += grid[i][j]; // Add the fish count from the starting cell
        
        int dr[] = {0, -1, 0, 1};
        int dc[] = {1, 0, -1, 0};
        
        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            
            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];
                if (isvalid(nr, nc, n, m) && vis[nr][nc] == 0 && grid[nr][nc] != 0) {
                    sum += grid[nr][nc];
                    vis[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }
        return sum;
    }

    bool isvalid(int nr, int nc, int n, int m) {
        return nr >= 0 && nc >= 0 && nr < n && nc < m;
    }
};
