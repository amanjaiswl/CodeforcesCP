#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int count2 = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 2) {
                count2++;
            }
        }

        if (count2 == 0) {  
            cout << 1 << "\n";
            continue;
        }

        if (count2 % 2 != 0) {  
            cout << -1 << "\n";
            continue;
        }

        int target = count2 / 2;
        int current2 = 0;
        int k = -1;
        for (int i = 0; i < n; i++) {
            if (v[i] == 2) {
                current2++;
            }
            if (current2 == target) {
                k = i + 1;  
                break;
            }
        }
        cout << k << "\n";
    }
    return 0;
}
