// https://codeforces.com/contest/1873/problem/E
// couldn't do it
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

ll calculateWater(const vector<ll>& a, ll h) {
    ll totalWater = 0;
    for (ll height : a) { 
        if (h > height) {
            totalWater += (h - height);
        }
    }
    return totalWater;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        ll x;
        cin >> n >> x;

        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll l = 0;
        ll r = *max_element(a.begin(), a.end()) + x;
        ll bestH = 0;

        while (l <= r) {
            ll mid = l + (r - l) / 2;
            ll neededWater = calculateWater(a, mid);

            if (neededWater <= x) {
                bestH = mid; 
                l = mid + 1;
            } else {
                r = mid - 1; 
            }
        }

        cout << bestH << endl;
    }

    return 0;
}
