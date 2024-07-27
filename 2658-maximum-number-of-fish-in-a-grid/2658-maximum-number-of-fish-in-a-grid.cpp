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
                if (grid[i][j] > 0) { // Start BFS only from water cells with fish
                    ans = max(ans, bfs(grid, i, j));
                }
            }
        }
        return ans;
    }

private:
    int bfs(vector<vector<int>>& grid, int i, int j) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        int sum = 0;
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        
        q.push({i, j});
        vis[i][j] = true;
        
        int dr[] = {0, -1, 0, 1};
        int dc[] = {1, 0, -1, 0};

        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            sum += grid[r][c];

            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];
                if (isValid(nr, nc, n, m) && grid[nr][nc] > 0 && !vis[nr][nc]) {
                    q.push({nr, nc});
                    vis[nr][nc] = true;
                }
            }
        }

        return sum;
    }

    bool isValid(int nr, int nc, int n, int m) {
        return nr >= 0 && nc >= 0 && nr < n && nc < m;
    }
};
