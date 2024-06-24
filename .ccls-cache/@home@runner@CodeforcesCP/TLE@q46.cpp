#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());
    int wins = 0;
    int remainingPlayers = n;

    for (int i = 0; i < n && remainingPlayers > 0; i++) {
        int neededPlayers = (d / v[i]) + 1;
        if (remainingPlayers >= neededPlayers) {
            wins++;
            remainingPlayers -= neededPlayers;
        } else {
            break;
        }
    }

    cout << wins << "\n";
}

int main() {
    solve();
    return 0;
}
