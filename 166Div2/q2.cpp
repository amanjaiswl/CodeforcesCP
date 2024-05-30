#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> b(n + 1);
        for (int i = 0; i < n + 1; i++) {
            cin >> b[i];
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += abs(b[i] - a[i]);
        }

        if (find(a.begin(), a.end(), b[n]) != a.end()) {
            cout << sum + 1 << endl;
        } else {
            int minDiff = INT_MAX;
            int closestElement = a[0];  
            for (int i = 0; i < n; i++) {
                int diff = abs(b[n] - a[i]);
                if (diff < minDiff) {
                    minDiff = diff;
                    closestElement = a[i];
                }
            }

            if (closestElement > b[n]) {
                cout << sum + 1 << endl;
            } else {
                
                int adjustment =  (b[n] - closestElement);
                cout << sum + 1 + adjustment << endl;
            }
        }
    }
    return 0;
}
