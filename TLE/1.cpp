// https://codeforces.com/problemset/problem/1903/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);  

        for (int i = 0; i < n; i++) {  
            cin >> v[i];
        }

        if (k <= 1) {
            bool flag = true;
            for (int i = 1; i < n; i++) {
                if (v[i - 1] > v[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
