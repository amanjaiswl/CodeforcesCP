#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct UnionFind {
    vector<int> parent, rank, size;
    UnionFind(int n) : parent(n), rank(n, 0), size(n, 1) {
        for (int i = 0; i < n; ++i) parent[i] = i;
    }
    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }
    void unite(int x, int y) {
        int rootX = find(x), rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
                size[rootX] += size[rootY];
            } else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
                size[rootY] += size[rootX];
            } else {
                parent[rootY] = rootX;
                size[rootX] += size[rootY];
                rank[rootX]++;
            }
        }
    }
    int getSize(int x) {
        return size[find(x)];
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }

        UnionFind uf(n * m);
        int maxSize = 0;

        auto index = [m](int x, int y) { return x * m + y; };
        int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '#') {
                    for (auto &dir : directions) {
                        int nx = i + dir[0], ny = j + dir[1];
                        if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == '#') {
                            uf.unite(index(i, j), index(nx, ny));
                        }
                    }
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '#') {
                    maxSize = max(maxSize, uf.getSize(index(i, j)));
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            int rowSize = 0;
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '#') {
                    rowSize += uf.getSize(index(i, j));
                }
            }
            maxSize = max(maxSize, rowSize);
        }

        for (int j = 0; j < m; ++j) {
            int colSize = 0;
            for (int i = 0; i < n; ++i) {
                if (grid[i][j] == '#') {
                    colSize += uf.getSize(index(i, j));
                }
            }
            maxSize = max(maxSize, colSize);
        }

        cout << maxSize << "\n";
    }

    return 0;
}
