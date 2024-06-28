#include <iostream>
#include <vector>
#include <cmath>

#define ll long long

using namespace std;

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}


void solve() {
    int d;
    cin >> d;

    ll p = d + 1;
    while (!is_prime(p)) {
        p++;
    }

    ll q = p + d;
    while (!is_prime(q)) {
        q++;
    }

    ll ans1 = p * q;
    ll ans2 = static_cast<ll>(p) * p * p;

    cout << min(ans1, ans2) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
