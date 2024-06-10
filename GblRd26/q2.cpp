// such a easy question. knew the logic upto certain extent but couldn't do it in the contest.

#include <iostream>
#include <string>
using namespace std;

#define ll long long

void solve() {
    ll n; cin >> n;
    string num = to_string(n);

    if (num.front() != '1') {
        cout << "NO\n";
        return;
    }

    if (num.back() == '9') {
        cout << "NO\n";
        return;
    }

    for (int i = 1; i < num.length() - 1; ++i) {
        if (num[i] == '0') {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
