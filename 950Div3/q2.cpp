#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, f, k;
        cin >> n >> f >> k;

        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int x = v[f-1];

        sort(v.begin(), v.end(), greater<int>());

        bool in_first_range = false, in_second_range = false;

        for(int i = 0; i < k; i++) {
            if(v[i] == x) {
                in_first_range = true;
                break;
            }
        }
        for(int i = k; i < n; i++) {
            if(v[i] == x) {
                in_second_range = true;
                break;
            }
        }

        if (in_first_range && in_second_range) {
            cout << "MAYBE" << endl;
        } else if (in_first_range) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
