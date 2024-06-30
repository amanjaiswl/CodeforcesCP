// https://codeforces.com/problemset/problem/1914/C

#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        ll res = 0;
        ll sum = 0;
        int maxb = 0;

        for (int i = 0; i < min(n, k); ++i) {
            sum += a[i];
            maxb = max(maxb, b[i]);
            res = max(res, sum + maxb * (k - i - 1));
        }

        cout << res << endl;
    }

    return 0;
}

