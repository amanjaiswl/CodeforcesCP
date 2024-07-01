// https://codeforces.com/problemset/problem/1821/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) {
        cin >> x;
    }

    vector<int> b(n);
    for (auto &x : b) {
        cin >> x;
    }

    int l = -1, r = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            l = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] != b[i]) {
            r = i;
            break;
        }
    }

    while (l > 0 && b[l] >= b[l - 1]) l--;
    while (r < n - 1 && b[r] <= b[r + 1]) r++;

    cout << l + 1 << " " << r + 1 << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
