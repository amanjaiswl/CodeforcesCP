#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for std::gcd

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    // Check if there exist two elements such that all elements are divisible by at least one of them
    long long gcd_all = a[0];
    for (int i = 1; i < n; ++i) {
        gcd_all = gcd(gcd_all, a[i]);
    }

    bool isBeautiful = false;

    for (int i = 0; i < n; ++i) {
        long long gcd_with_a_i = gcd_all;
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                gcd_with_a_i = gcd(gcd_with_a_i, a[j]);
            }
        }
        if (gcd_with_a_i == a[i] || gcd_with_a_i == gcd_all) {
            isBeautiful = true;
            break;
        }
    }

    if (isBeautiful) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
