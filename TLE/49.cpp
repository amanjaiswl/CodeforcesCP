#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <set>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    unordered_map<int, vector<int>> groups;
    for (int i = 0; i < n; i++) {
        groups[s[i]].push_back(i + 1);
    }

    for (const auto& group : groups) {
        if (group.second.size() < 2) {
            cout << -1 << "\n";
            return;
        }
    }

    vector<int> p(n);

    for (auto& group : groups) {
        int size = group.second.size();
        vector<int>& indices = group.second;
        for (int i = 0; i < size; i++) {
            p[indices[i] - 1] = indices[(i + 1) % size];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
