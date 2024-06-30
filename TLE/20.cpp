#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        sort(v.begin(), v.end(), greater<int>());

        if(v[0] == v[n-1]) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << v[0] << " ";
            cout << v[n-1] << " ";
            for(int i = 1; i < n - 1; ++i) {
                cout << v[i] << " ";
            }
          cout << "\n";
            
        }
    }
    return 0;
}
