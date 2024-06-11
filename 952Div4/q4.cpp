#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        int minX = n, maxX = 0, minY = m, maxY = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (v[i][j] == '#') {
                    minX = min(minX, i);
                    maxX = max(maxX, i);
                    minY = min(minY, j);
                    maxY = max(maxY, j);
                }
            }
        }

        int middlex = (minX + maxX) / 2 + 1;
        int middley = (minY + maxY) / 2 + 1;

        cout << middlex << " " << middley << endl;
    }

    return 0;
}
