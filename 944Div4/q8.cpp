#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class TwoSat {
public:
    TwoSat(int n) : n(n), adj(2 * n), adj_rev(2 * n), visited(2 * n), component(2 * n), assignment(n) {}

    void addClause(int u, int v) {
        adj[u ^ 1].push_back(v);
        adj[v ^ 1].push_back(u);
        adj_rev[v].push_back(u ^ 1);
        adj_rev[u].push_back(v ^ 1);
    }

    bool solve() {
        for (int i = 0; i < 2 * n; ++i) {
            if (!visited[i]) {
                dfs1(i);
            }
        }

        fill(visited.begin(), visited.end(), false);

        while (!order.empty()) {
            int u = order.back();
            order.pop_back();
            if (!visited[u]) {
                dfs2(u, scc_count++);
            }
        }

        for (int i = 0; i < n; ++i) {
            if (component[2 * i] == component[2 * i + 1]) {
                return false;
            }
            assignment[i] = component[2 * i] > component[2 * i + 1];
        }
        return true;
    }

    const vector<bool>& getAssignment() const {
        return assignment;
    }

private:
    int n;
    vector<vector<int>> adj, adj_rev;
    vector<bool> visited;
    vector<int> component, order;
    vector<bool> assignment;
    int scc_count = 0;

    void dfs1(int u) {
        visited[u] = true;
        for (int v : adj[u]) {
            if (!visited[v]) {
                dfs1(v);
            }
        }
        order.push_back(u);
    }

    void dfs2(int u, int root) {
        visited[u] = true;
        component[u] = root;
        for (int v : adj_rev[u]) {
            if (!visited[v]) {
                dfs2(v, root);
            }
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> grid(3, vector<int>(n));
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> grid[i][j];
            }
        }

        TwoSat solver(n);
        for (int j = 0; j < n; ++j) {
            int x = grid[0][j] > 0 ? grid[0][j] - 1 : -(grid[0][j] + 1);
            int y = grid[1][j] > 0 ? grid[1][j] - 1 : -(grid[1][j] + 1);
            int z = grid[2][j] > 0 ? grid[2][j] - 1 : -(grid[2][j] + 1);

            solver.addClause(2 * x + (grid[0][j] < 0), 2 * y + (grid[1][j] < 0));
            solver.addClause(2 * y + (grid[1][j] < 0), 2 * z + (grid[2][j] < 0));
            solver.addClause(2 * z + (grid[2][j] < 0), 2 * x + (grid[0][j] < 0));
        }

        if (solver.solve()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
