// https://codeforces.com/problemset/problem/1715/B

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;

        long long min_sum = k * b;
        long long max_sum = k * b + (k - 1) * n;

        if (s < min_sum || s > max_sum) {
            cout << -1 << endl;
        } else {
            vector<long long> a(n, 0);
            a[0] = k * b;
            s -= k * b;

            for (int i = 0; i < n; ++i) {
                if (s <= 0) break;
                long long add = min(s, k - 1);
                a[i] += add;
                s -= add;
            }

            for (int i = 0; i < n; ++i) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
