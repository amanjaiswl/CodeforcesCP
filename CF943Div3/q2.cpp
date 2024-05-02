#include <iostream>
#include <string>
using namespace std;

int solve() {
    int n, m;
    cin >> n >> m;
  
    string a, b;
    cin >> a >> b;

    int maxK = 0;
    int j = 0;  

    for (int i = 0; i < n; ++i) {
        while (j < m && b[j] != a[i]) {
            j++;  
        }
        if (j < m) {
            maxK = i + 1;  
            j++;  
        } else {
            break;  
        }
    }
    return maxK;  
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k = solve();
        cout << k << endl;
    }
    return 0;
}
