#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

#define ll long long

void solve() {
    ll x, y, k;
    cin >> x >> y >> k;

    ll minsticks = k + k * y;
    ll mintrades = (minsticks - 1 + (x - 1) - 1) / (x - 1);

    cout << mintrades + k << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
