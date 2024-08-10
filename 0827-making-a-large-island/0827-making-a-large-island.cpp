#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int island_id = 2;
        unordered_map<int, int> island_sizes;

        // BFS to label the islands and store their sizes
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) {
                    int size = bfs(grid, i, j, island_id);
                    island_sizes[island_id] = size;
                    island_id++;
                }
            }
        }

        int max_size = 0;
        for (auto& entry : island_sizes) {
            max_size = max(max_size, entry.second);
        }

        // Check each 0 cell to see if it can form a larger island by connecting adjacent islands
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 0) {
                    unordered_set<int> seen;
                    int new_size = 1; // Start with size 1 for the flipped cell
                    for (int d = 0; d < 4; ++d) {
                        int ni = i + dr[d];
                        int nj = j + dc[d];
                        if (isValid(ni, nj, n) && grid[ni][nj] > 1 && seen.find(grid[ni][nj]) == seen.end()) {
                            new_size += island_sizes[grid[ni][nj]];
                            seen.insert(grid[ni][nj]);
                        }
                    }
                    max_size = max(max_size, new_size);
                }
            }
        }

        return max_size > 0 ? max_size : n * n;
    }

private:
    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = {0, 0, -1, 1};

    int bfs(vector<vector<int>>& grid, int r, int c, int id) {
        int n = grid.size();
        queue<pair<int, int>> q;
        q.push({r, c});
        grid[r][c] = id;
        int size = 1;

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            for (int d = 0; d < 4; ++d) {
                int ni = x + dr[d];
                int nj = y + dc[d];

                if (isValid(ni, nj, n) && grid[ni][nj] == 1) {
                    grid[ni][nj] = id;
                    size++;
                    q.push({ni, nj});
                }
            }
        }

        return size;
    }

    bool isValid(int r, int c, int n) {
        return r >= 0 && c >= 0 && r < n && c < n;
    }
};
