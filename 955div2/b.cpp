#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v(n);
    for (auto &i : v) {
        cin >> i;
    }

    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + v[i];
    }

    int win = 0;
    int start = 0, end = 0;

    while (end < n) {
        long long sum = prefix_sum[end + 1] - prefix_sum[start];
        if (sum >= l && sum <= r) {
            win++;
            end++;
            start = end; 
        } else if (sum < l) {
            end++; 
        } else {
            start++; 
        }
    }

    cout << win << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
