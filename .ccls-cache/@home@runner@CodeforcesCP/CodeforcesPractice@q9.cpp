// https://codeforces.com/problemset/problem/1855/B

#include <iostream>
#define ll long long

using namespace std;

ll findMaxInterval(ll n) {
    for (ll x = 1; ; ++x) {
        if (n % x != 0) {
            return x - 1;
        }
    }
    return -1; 
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        cout << findMaxInterval(n) << endl;
    }

    return 0;
}
