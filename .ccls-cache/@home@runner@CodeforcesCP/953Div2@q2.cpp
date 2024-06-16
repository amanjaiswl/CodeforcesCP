#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long

ll profit(ll n, ll a, ll b, ll k) {
    ll sumModified = k * (2 * b - k + 1) / 2;
    return sumModified + (n - k) * a;
}

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;

    if (b <= a) {
        cout << n * a << endl;
        return;
    }

    ll low = 0, high = min(n, b - a);
    while (high - low > 2) {
        ll mid1 = low + (high - low) / 3;
        ll mid2 = high - (high - low) / 3;
        ll p1 = profit(n, a, b, mid1);
        ll p2 = profit(n, a, b, mid2);
        if (p1 < p2)
            low = mid1;
        else
            high = mid2;
    }

    ll maxProfit = n * a; 
    for (ll i = low; i <= high; ++i)
        maxProfit = max(maxProfit, profit(n, a, b, i));

    cout << maxProfit << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
