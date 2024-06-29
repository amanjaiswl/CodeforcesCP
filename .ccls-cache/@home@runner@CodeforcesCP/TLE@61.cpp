#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] > s[i + 1]) {
            cout << "YES\n";
            cout << i + 1 << " " << i + 2 << '\n';
            return;
        }
    }
    cout << "NO\n";
}

int main(){
    solve();
    return 0;
}
