#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

bool isLocalMax(const vector<vector<int>>& matrix, int i, int j, int n, int m) {
    int value = matrix[i][j];
    if (i > 0 && matrix[i-1][j] >= value) return false;
    if (i < n-1 && matrix[i+1][j] >= value) return false;
    if (j > 0 && matrix[i][j-1] >= value) return false;
    if (j < m-1 && matrix[i][j+1] >= value) return false;
    return true;
}

int largestNeighbor(const vector<vector<int>>& matrix, int i, int j, int n, int m) {
    int maxValue = 0;
    if (i > 0) maxValue = max(maxValue, matrix[i-1][j]);
    if (i < n-1) maxValue = max(maxValue, matrix[i+1][j]);
    if (j > 0) maxValue = max(maxValue, matrix[i][j-1]);
    if (j < m-1) maxValue = max(maxValue, matrix[i][j+1]);
    return maxValue;
}

void stabilizeMatrix(vector<vector<int>>& matrix, int n, int m) {
    bool stabilized = false;
    while (!stabilized) {
        stabilized = true;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (isLocalMax(matrix, i, j, n, m)) {
                    int maxValue = largestNeighbor(matrix, i, j, n, m);
                    if (matrix[i][j] > maxValue) {
                        matrix[i][j] = maxValue;
                        stabilized = false;
                    }
                }
            }
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    stabilizeMatrix(matrix, n, m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
