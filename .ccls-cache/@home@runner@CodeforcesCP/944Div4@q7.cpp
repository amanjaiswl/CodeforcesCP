// right but time exceed

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class UnionFind {
public:
    UnionFind(int n) : parent(n), rank(n, 0) {
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }

private:
    vector<int> parent;
    vector<int> rank;
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        UnionFind uf(n);

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if ((a[i] ^ a[j]) < 4) {
                    uf.unite(i, j);
                }
            }
        }

        unordered_map<int, vector<int>> groups;
        for (int i = 0; i < n; ++i) {
            int root = uf.find(i);
            groups[root].push_back(i);
        }

        vector<int> result(n);
        for (auto& group : groups) {
            vector<int> indices = group.second;
            vector<int> values;
            for (int index : indices) {
                values.push_back(a[index]);
            }
            sort(values.begin(), values.end());
            for (size_t i = 0; i < indices.size(); ++i) {
                result[indices[i]] = values[i];
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}