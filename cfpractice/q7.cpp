#include <iostream>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k, x;
        cin >> n >> k >> x;

        ll minSum = k * (k + 1) / 2;
        ll maxSum = k * (2 * n - k + 1) / 2;

        if (x >= minSum && x <= maxSum) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
