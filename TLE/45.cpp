#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long

void solve() {
    int n;
    char current_color;
    cin >> n >> current_color;
    string s;
    cin >> s;

    s += s;

    int last_green = -1;
    int max_wait_time = 0;

    for (int i = 2 * n - 1; i >= 0; --i) {
        if (s[i] == 'g') {
            last_green = i;
        }
        if (i < n && s[i] == current_color) {
            if (last_green != -1) {
                max_wait_time = max(max_wait_time, last_green - i);
            }
        }
    }

    cout << max_wait_time << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
