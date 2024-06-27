#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    
    int current_w_count = 0;
    for (int i = 0; i < k; i++) {
        if (s[i] == 'W') {
            current_w_count++;
        }
    }

    
    int min_repaint = current_w_count;

    for (int i = k; i < n; i++) {
        if (s[i - k] == 'W') {
            current_w_count--;  
        }
        if (s[i] == 'W') {
            current_w_count++; 
        }
        min_repaint = min(min_repaint, current_w_count);
    }

    cout << min_repaint << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
