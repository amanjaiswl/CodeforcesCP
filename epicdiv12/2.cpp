// question c

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> h(n); 
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        vector<int> timezero(n);
          timezero[n - 1] = h[n - 1]; 

        for (int i = n - 2; i >= 0; i--) {
              timezero[i] = max(h[i], timezero[i + 1] + 1);
        }

      
        cout << timezero[0] << endl;
    }
    return 0;
}
