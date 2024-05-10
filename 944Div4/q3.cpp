#include <bits/stdc++.h>
using namespace std;

bool checker(int a, int b, int c, int d) {
    
    if (a > b) swap(a, b);
    if (c > d) swap(c, d);

    return (a < c && c < b && b < d) || (c < a && a < d && d < b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (checker(a, b, c, d) || checker(c, d, a, b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
