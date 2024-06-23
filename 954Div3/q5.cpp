#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

#define ll long long

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (k == 0) {
        for (ll i = 0; i < n; ++i) {
            if (a[i] != a[n - i - 1]) {
                cout << -1 << endl;
                return;
            }
        }
        cout << 0 << endl;
        return;
    }

    map<ll, ll> count;
    for (ll i = 0; i < n / 2; ++i) {
        ll diff = abs(a[i] - a[n - i - 1]);
        if (diff % k != 0) {
            cout << -1 << endl;
            return;
        }
        count[diff / k]++;
    }

    ll operations = 0;
    for (auto &pair : count) {
        operations += pair.second;
    }

    cout << operations << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
